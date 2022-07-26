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

#include <tencentcloud/dbdc/v20201029/model/DescribeInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DescribeInstanceDetail::DescribeInstanceDetail() :
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

CoreInternalOutcome DescribeInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.ProductId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetInt64();
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("HostType") && !value["HostType"].IsNull())
    {
        if (!value["HostType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.HostType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostType = value["HostType"].GetInt64();
        m_hostTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("HostNum") && !value["HostNum"].IsNull())
    {
        if (!value["HostNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.HostNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostNum = value["HostNum"].GetInt64();
        m_hostNumHasBeenSet = true;
    }

    if (value.HasMember("DbNum") && !value["DbNum"].IsNull())
    {
        if (!value["DbNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.DbNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbNum = value["DbNum"].GetInt64();
        m_dbNumHasBeenSet = true;
    }

    if (value.HasMember("AssignStrategy") && !value["AssignStrategy"].IsNull())
    {
        if (!value["AssignStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.AssignStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assignStrategy = value["AssignStrategy"].GetInt64();
        m_assignStrategyHasBeenSet = true;
    }

    if (value.HasMember("CpuSpec") && !value["CpuSpec"].IsNull())
    {
        if (!value["CpuSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.CpuSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSpec = value["CpuSpec"].GetInt64();
        m_cpuSpecHasBeenSet = true;
    }

    if (value.HasMember("CpuAssigned") && !value["CpuAssigned"].IsNull())
    {
        if (!value["CpuAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.CpuAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAssigned = value["CpuAssigned"].GetInt64();
        m_cpuAssignedHasBeenSet = true;
    }

    if (value.HasMember("CpuAssignable") && !value["CpuAssignable"].IsNull())
    {
        if (!value["CpuAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.CpuAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAssignable = value["CpuAssignable"].GetInt64();
        m_cpuAssignableHasBeenSet = true;
    }

    if (value.HasMember("MemorySpec") && !value["MemorySpec"].IsNull())
    {
        if (!value["MemorySpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.MemorySpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memorySpec = value["MemorySpec"].GetInt64();
        m_memorySpecHasBeenSet = true;
    }

    if (value.HasMember("MemoryAssigned") && !value["MemoryAssigned"].IsNull())
    {
        if (!value["MemoryAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.MemoryAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryAssigned = value["MemoryAssigned"].GetInt64();
        m_memoryAssignedHasBeenSet = true;
    }

    if (value.HasMember("MemoryAssignable") && !value["MemoryAssignable"].IsNull())
    {
        if (!value["MemoryAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.MemoryAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryAssignable = value["MemoryAssignable"].GetInt64();
        m_memoryAssignableHasBeenSet = true;
    }

    if (value.HasMember("DiskSpec") && !value["DiskSpec"].IsNull())
    {
        if (!value["DiskSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.DiskSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSpec = value["DiskSpec"].GetInt64();
        m_diskSpecHasBeenSet = true;
    }

    if (value.HasMember("DiskAssigned") && !value["DiskAssigned"].IsNull())
    {
        if (!value["DiskAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.DiskAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAssigned = value["DiskAssigned"].GetInt64();
        m_diskAssignedHasBeenSet = true;
    }

    if (value.HasMember("DiskAssignable") && !value["DiskAssignable"].IsNull())
    {
        if (!value["DiskAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.DiskAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAssignable = value["DiskAssignable"].GetInt64();
        m_diskAssignableHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("FenceId") && !value["FenceId"].IsNull())
    {
        if (!value["FenceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.FenceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fenceId = string(value["FenceId"].GetString());
        m_fenceIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeInstanceDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string DescribeInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeInstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeInstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeInstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeInstanceDetail::GetRegion() const
{
    return m_region;
}

void DescribeInstanceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DescribeInstanceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t DescribeInstanceDetail::GetProductId() const
{
    return m_productId;
}

void DescribeInstanceDetail::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeInstanceDetail::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

int64_t DescribeInstanceDetail::GetType() const
{
    return m_type;
}

void DescribeInstanceDetail::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeInstanceDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeInstanceDetail::GetHostType() const
{
    return m_hostType;
}

void DescribeInstanceDetail::SetHostType(const int64_t& _hostType)
{
    m_hostType = _hostType;
    m_hostTypeHasBeenSet = true;
}

bool DescribeInstanceDetail::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

int64_t DescribeInstanceDetail::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DescribeInstanceDetail::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DescribeInstanceDetail::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t DescribeInstanceDetail::GetStatus() const
{
    return m_status;
}

void DescribeInstanceDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeInstanceDetail::GetStatusDesc() const
{
    return m_statusDesc;
}

void DescribeInstanceDetail::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool DescribeInstanceDetail::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DescribeInstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void DescribeInstanceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeInstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeInstanceDetail::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void DescribeInstanceDetail::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool DescribeInstanceDetail::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t DescribeInstanceDetail::GetHostNum() const
{
    return m_hostNum;
}

void DescribeInstanceDetail::SetHostNum(const int64_t& _hostNum)
{
    m_hostNum = _hostNum;
    m_hostNumHasBeenSet = true;
}

bool DescribeInstanceDetail::HostNumHasBeenSet() const
{
    return m_hostNumHasBeenSet;
}

int64_t DescribeInstanceDetail::GetDbNum() const
{
    return m_dbNum;
}

void DescribeInstanceDetail::SetDbNum(const int64_t& _dbNum)
{
    m_dbNum = _dbNum;
    m_dbNumHasBeenSet = true;
}

bool DescribeInstanceDetail::DbNumHasBeenSet() const
{
    return m_dbNumHasBeenSet;
}

int64_t DescribeInstanceDetail::GetAssignStrategy() const
{
    return m_assignStrategy;
}

void DescribeInstanceDetail::SetAssignStrategy(const int64_t& _assignStrategy)
{
    m_assignStrategy = _assignStrategy;
    m_assignStrategyHasBeenSet = true;
}

bool DescribeInstanceDetail::AssignStrategyHasBeenSet() const
{
    return m_assignStrategyHasBeenSet;
}

int64_t DescribeInstanceDetail::GetCpuSpec() const
{
    return m_cpuSpec;
}

void DescribeInstanceDetail::SetCpuSpec(const int64_t& _cpuSpec)
{
    m_cpuSpec = _cpuSpec;
    m_cpuSpecHasBeenSet = true;
}

bool DescribeInstanceDetail::CpuSpecHasBeenSet() const
{
    return m_cpuSpecHasBeenSet;
}

int64_t DescribeInstanceDetail::GetCpuAssigned() const
{
    return m_cpuAssigned;
}

void DescribeInstanceDetail::SetCpuAssigned(const int64_t& _cpuAssigned)
{
    m_cpuAssigned = _cpuAssigned;
    m_cpuAssignedHasBeenSet = true;
}

bool DescribeInstanceDetail::CpuAssignedHasBeenSet() const
{
    return m_cpuAssignedHasBeenSet;
}

int64_t DescribeInstanceDetail::GetCpuAssignable() const
{
    return m_cpuAssignable;
}

void DescribeInstanceDetail::SetCpuAssignable(const int64_t& _cpuAssignable)
{
    m_cpuAssignable = _cpuAssignable;
    m_cpuAssignableHasBeenSet = true;
}

bool DescribeInstanceDetail::CpuAssignableHasBeenSet() const
{
    return m_cpuAssignableHasBeenSet;
}

int64_t DescribeInstanceDetail::GetMemorySpec() const
{
    return m_memorySpec;
}

void DescribeInstanceDetail::SetMemorySpec(const int64_t& _memorySpec)
{
    m_memorySpec = _memorySpec;
    m_memorySpecHasBeenSet = true;
}

bool DescribeInstanceDetail::MemorySpecHasBeenSet() const
{
    return m_memorySpecHasBeenSet;
}

int64_t DescribeInstanceDetail::GetMemoryAssigned() const
{
    return m_memoryAssigned;
}

void DescribeInstanceDetail::SetMemoryAssigned(const int64_t& _memoryAssigned)
{
    m_memoryAssigned = _memoryAssigned;
    m_memoryAssignedHasBeenSet = true;
}

bool DescribeInstanceDetail::MemoryAssignedHasBeenSet() const
{
    return m_memoryAssignedHasBeenSet;
}

int64_t DescribeInstanceDetail::GetMemoryAssignable() const
{
    return m_memoryAssignable;
}

void DescribeInstanceDetail::SetMemoryAssignable(const int64_t& _memoryAssignable)
{
    m_memoryAssignable = _memoryAssignable;
    m_memoryAssignableHasBeenSet = true;
}

bool DescribeInstanceDetail::MemoryAssignableHasBeenSet() const
{
    return m_memoryAssignableHasBeenSet;
}

int64_t DescribeInstanceDetail::GetDiskSpec() const
{
    return m_diskSpec;
}

void DescribeInstanceDetail::SetDiskSpec(const int64_t& _diskSpec)
{
    m_diskSpec = _diskSpec;
    m_diskSpecHasBeenSet = true;
}

bool DescribeInstanceDetail::DiskSpecHasBeenSet() const
{
    return m_diskSpecHasBeenSet;
}

int64_t DescribeInstanceDetail::GetDiskAssigned() const
{
    return m_diskAssigned;
}

void DescribeInstanceDetail::SetDiskAssigned(const int64_t& _diskAssigned)
{
    m_diskAssigned = _diskAssigned;
    m_diskAssignedHasBeenSet = true;
}

bool DescribeInstanceDetail::DiskAssignedHasBeenSet() const
{
    return m_diskAssignedHasBeenSet;
}

int64_t DescribeInstanceDetail::GetDiskAssignable() const
{
    return m_diskAssignable;
}

void DescribeInstanceDetail::SetDiskAssignable(const int64_t& _diskAssignable)
{
    m_diskAssignable = _diskAssignable;
    m_diskAssignableHasBeenSet = true;
}

bool DescribeInstanceDetail::DiskAssignableHasBeenSet() const
{
    return m_diskAssignableHasBeenSet;
}

string DescribeInstanceDetail::GetZone() const
{
    return m_zone;
}

void DescribeInstanceDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeInstanceDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeInstanceDetail::GetFenceId() const
{
    return m_fenceId;
}

void DescribeInstanceDetail::SetFenceId(const string& _fenceId)
{
    m_fenceId = _fenceId;
    m_fenceIdHasBeenSet = true;
}

bool DescribeInstanceDetail::FenceIdHasBeenSet() const
{
    return m_fenceIdHasBeenSet;
}

string DescribeInstanceDetail::GetClusterId() const
{
    return m_clusterId;
}

void DescribeInstanceDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeInstanceDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

