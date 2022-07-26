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

#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DescribeInstanceDetailResponse::DescribeInstanceDetailResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_hostNumHasBeenSet(false),
    m_dbNumHasBeenSet(false),
    m_assignStrategyHasBeenSet(false),
    m_cpuSpecHasBeenSet(false),
    m_cpuAssignedHasBeenSet(false),
    m_cpuAssignableHasBeenSet(false),
    m_memorySpecHasBeenSet(false),
    m_memoryAssignedHasBeenSet(false),
    m_memoryAssignableHasBeenSet(false),
    m_diskSpecHasBeenSet(false),
    m_diskAssignedHasBeenSet(false),
    m_diskAssignableHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_fenceIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("ProductId") && !rsp["ProductId"].IsNull())
    {
        if (!rsp["ProductId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = rsp["ProductId"].GetInt64();
        m_productIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("HostType") && !rsp["HostType"].IsNull())
    {
        if (!rsp["HostType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostType = rsp["HostType"].GetInt64();
        m_hostTypeHasBeenSet = true;
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

    if (rsp.HasMember("HostNum") && !rsp["HostNum"].IsNull())
    {
        if (!rsp["HostNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostNum = rsp["HostNum"].GetInt64();
        m_hostNumHasBeenSet = true;
    }

    if (rsp.HasMember("DbNum") && !rsp["DbNum"].IsNull())
    {
        if (!rsp["DbNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DbNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbNum = rsp["DbNum"].GetInt64();
        m_dbNumHasBeenSet = true;
    }

    if (rsp.HasMember("AssignStrategy") && !rsp["AssignStrategy"].IsNull())
    {
        if (!rsp["AssignStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssignStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assignStrategy = rsp["AssignStrategy"].GetInt64();
        m_assignStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("CpuSpec") && !rsp["CpuSpec"].IsNull())
    {
        if (!rsp["CpuSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSpec = rsp["CpuSpec"].GetInt64();
        m_cpuSpecHasBeenSet = true;
    }

    if (rsp.HasMember("CpuAssigned") && !rsp["CpuAssigned"].IsNull())
    {
        if (!rsp["CpuAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAssigned = rsp["CpuAssigned"].GetInt64();
        m_cpuAssignedHasBeenSet = true;
    }

    if (rsp.HasMember("CpuAssignable") && !rsp["CpuAssignable"].IsNull())
    {
        if (!rsp["CpuAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CpuAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAssignable = rsp["CpuAssignable"].GetInt64();
        m_cpuAssignableHasBeenSet = true;
    }

    if (rsp.HasMember("MemorySpec") && !rsp["MemorySpec"].IsNull())
    {
        if (!rsp["MemorySpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemorySpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memorySpec = rsp["MemorySpec"].GetInt64();
        m_memorySpecHasBeenSet = true;
    }

    if (rsp.HasMember("MemoryAssigned") && !rsp["MemoryAssigned"].IsNull())
    {
        if (!rsp["MemoryAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryAssigned = rsp["MemoryAssigned"].GetInt64();
        m_memoryAssignedHasBeenSet = true;
    }

    if (rsp.HasMember("MemoryAssignable") && !rsp["MemoryAssignable"].IsNull())
    {
        if (!rsp["MemoryAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MemoryAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryAssignable = rsp["MemoryAssignable"].GetInt64();
        m_memoryAssignableHasBeenSet = true;
    }

    if (rsp.HasMember("DiskSpec") && !rsp["DiskSpec"].IsNull())
    {
        if (!rsp["DiskSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSpec = rsp["DiskSpec"].GetInt64();
        m_diskSpecHasBeenSet = true;
    }

    if (rsp.HasMember("DiskAssigned") && !rsp["DiskAssigned"].IsNull())
    {
        if (!rsp["DiskAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAssigned = rsp["DiskAssigned"].GetInt64();
        m_diskAssignedHasBeenSet = true;
    }

    if (rsp.HasMember("DiskAssignable") && !rsp["DiskAssignable"].IsNull())
    {
        if (!rsp["DiskAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAssignable = rsp["DiskAssignable"].GetInt64();
        m_diskAssignableHasBeenSet = true;
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

    if (rsp.HasMember("FenceId") && !rsp["FenceId"].IsNull())
    {
        if (!rsp["FenceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FenceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fenceId = string(rsp["FenceId"].GetString());
        m_fenceIdHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeInstanceDetailResponse::ToJsonString() const
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_hostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostType, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
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

    if (m_hostNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostNum, allocator);
    }

    if (m_dbNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbNum, allocator);
    }

    if (m_assignStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssignStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assignStrategy, allocator);
    }

    if (m_cpuSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuSpec, allocator);
    }

    if (m_cpuAssignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuAssigned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuAssigned, allocator);
    }

    if (m_cpuAssignableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuAssignable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuAssignable, allocator);
    }

    if (m_memorySpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemorySpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memorySpec, allocator);
    }

    if (m_memoryAssignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryAssigned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryAssigned, allocator);
    }

    if (m_memoryAssignableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryAssignable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryAssignable, allocator);
    }

    if (m_diskSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSpec, allocator);
    }

    if (m_diskAssignedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskAssigned";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskAssigned, allocator);
    }

    if (m_diskAssignableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskAssignable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskAssignable, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fenceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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


string DescribeInstanceDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeInstanceDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstanceDetailResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeInstanceDetailResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeInstanceDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeInstanceDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetProductId() const
{
    return m_productId;
}

bool DescribeInstanceDetailResponse::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetType() const
{
    return m_type;
}

bool DescribeInstanceDetailResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetHostType() const
{
    return m_hostType;
}

bool DescribeInstanceDetailResponse::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribeInstanceDetailResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeInstanceDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeInstanceDetailResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool DescribeInstanceDetailResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DescribeInstanceDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeInstanceDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeInstanceDetailResponse::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

bool DescribeInstanceDetailResponse::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetHostNum() const
{
    return m_hostNum;
}

bool DescribeInstanceDetailResponse::HostNumHasBeenSet() const
{
    return m_hostNumHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetDbNum() const
{
    return m_dbNum;
}

bool DescribeInstanceDetailResponse::DbNumHasBeenSet() const
{
    return m_dbNumHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetAssignStrategy() const
{
    return m_assignStrategy;
}

bool DescribeInstanceDetailResponse::AssignStrategyHasBeenSet() const
{
    return m_assignStrategyHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetCpuSpec() const
{
    return m_cpuSpec;
}

bool DescribeInstanceDetailResponse::CpuSpecHasBeenSet() const
{
    return m_cpuSpecHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetCpuAssigned() const
{
    return m_cpuAssigned;
}

bool DescribeInstanceDetailResponse::CpuAssignedHasBeenSet() const
{
    return m_cpuAssignedHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetCpuAssignable() const
{
    return m_cpuAssignable;
}

bool DescribeInstanceDetailResponse::CpuAssignableHasBeenSet() const
{
    return m_cpuAssignableHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetMemorySpec() const
{
    return m_memorySpec;
}

bool DescribeInstanceDetailResponse::MemorySpecHasBeenSet() const
{
    return m_memorySpecHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetMemoryAssigned() const
{
    return m_memoryAssigned;
}

bool DescribeInstanceDetailResponse::MemoryAssignedHasBeenSet() const
{
    return m_memoryAssignedHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetMemoryAssignable() const
{
    return m_memoryAssignable;
}

bool DescribeInstanceDetailResponse::MemoryAssignableHasBeenSet() const
{
    return m_memoryAssignableHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetDiskSpec() const
{
    return m_diskSpec;
}

bool DescribeInstanceDetailResponse::DiskSpecHasBeenSet() const
{
    return m_diskSpecHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetDiskAssigned() const
{
    return m_diskAssigned;
}

bool DescribeInstanceDetailResponse::DiskAssignedHasBeenSet() const
{
    return m_diskAssignedHasBeenSet;
}

int64_t DescribeInstanceDetailResponse::GetDiskAssignable() const
{
    return m_diskAssignable;
}

bool DescribeInstanceDetailResponse::DiskAssignableHasBeenSet() const
{
    return m_diskAssignableHasBeenSet;
}

string DescribeInstanceDetailResponse::GetZone() const
{
    return m_zone;
}

bool DescribeInstanceDetailResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeInstanceDetailResponse::GetFenceId() const
{
    return m_fenceId;
}

bool DescribeInstanceDetailResponse::FenceIdHasBeenSet() const
{
    return m_fenceIdHasBeenSet;
}

string DescribeInstanceDetailResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeInstanceDetailResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}


