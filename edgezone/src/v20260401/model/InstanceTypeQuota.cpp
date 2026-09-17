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

#include <tencentcloud/edgezone/v20260401/model/InstanceTypeQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

InstanceTypeQuota::InstanceTypeQuota() :
    m_zoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_instanceFamilyNameHasBeenSet(false),
    m_cpuCoresHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_memoryGbHasBeenSet(false),
    m_systemDiskTypeHasBeenSet(false),
    m_systemDiskSizeHasBeenSet(false),
    m_systemDiskCountHasBeenSet(false),
    m_dataDiskTypeHasBeenSet(false),
    m_dataDiskSizeHasBeenSet(false),
    m_dataDiskCountHasBeenSet(false),
    m_secondaryDataDiskTypeHasBeenSet(false),
    m_secondaryDataDiskSizeHasBeenSet(false),
    m_secondaryDataDiskCountHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_networkInterfaceTypeHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_quotaHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTypeQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamilyName") && !value["InstanceFamilyName"].IsNull())
    {
        if (!value["InstanceFamilyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.InstanceFamilyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamilyName = string(value["InstanceFamilyName"].GetString());
        m_instanceFamilyNameHasBeenSet = true;
    }

    if (value.HasMember("CpuCores") && !value["CpuCores"].IsNull())
    {
        if (!value["CpuCores"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.CpuCores` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuCores = value["CpuCores"].GetInt64();
        m_cpuCoresHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }

    if (value.HasMember("MemoryGb") && !value["MemoryGb"].IsNull())
    {
        if (!value["MemoryGb"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.MemoryGb` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryGb = value["MemoryGb"].GetInt64();
        m_memoryGbHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskType") && !value["SystemDiskType"].IsNull())
    {
        if (!value["SystemDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.SystemDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskType = string(value["SystemDiskType"].GetString());
        m_systemDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskSize") && !value["SystemDiskSize"].IsNull())
    {
        if (!value["SystemDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.SystemDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskSize = value["SystemDiskSize"].GetInt64();
        m_systemDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskCount") && !value["SystemDiskCount"].IsNull())
    {
        if (!value["SystemDiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.SystemDiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskCount = value["SystemDiskCount"].GetUint64();
        m_systemDiskCountHasBeenSet = true;
    }

    if (value.HasMember("DataDiskType") && !value["DataDiskType"].IsNull())
    {
        if (!value["DataDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.DataDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskType = string(value["DataDiskType"].GetString());
        m_dataDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("DataDiskSize") && !value["DataDiskSize"].IsNull())
    {
        if (!value["DataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.DataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskSize = value["DataDiskSize"].GetInt64();
        m_dataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DataDiskCount") && !value["DataDiskCount"].IsNull())
    {
        if (!value["DataDiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.DataDiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskCount = value["DataDiskCount"].GetUint64();
        m_dataDiskCountHasBeenSet = true;
    }

    if (value.HasMember("SecondaryDataDiskType") && !value["SecondaryDataDiskType"].IsNull())
    {
        if (!value["SecondaryDataDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.SecondaryDataDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryDataDiskType = string(value["SecondaryDataDiskType"].GetString());
        m_secondaryDataDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("SecondaryDataDiskSize") && !value["SecondaryDataDiskSize"].IsNull())
    {
        if (!value["SecondaryDataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.SecondaryDataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryDataDiskSize = value["SecondaryDataDiskSize"].GetInt64();
        m_secondaryDataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("SecondaryDataDiskCount") && !value["SecondaryDataDiskCount"].IsNull())
    {
        if (!value["SecondaryDataDiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.SecondaryDataDiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryDataDiskCount = value["SecondaryDataDiskCount"].GetInt64();
        m_secondaryDataDiskCountHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("NetworkInterfaceType") && !value["NetworkInterfaceType"].IsNull())
    {
        if (!value["NetworkInterfaceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.NetworkInterfaceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkInterfaceType = string(value["NetworkInterfaceType"].GetString());
        m_networkInterfaceTypeHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeQuota.Quota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = value["Quota"].GetUint64();
        m_quotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTypeQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamilyName.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuCoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuCores, allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryGbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryGb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryGb, allocator);
    }

    if (m_systemDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_systemDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDiskSize, allocator);
    }

    if (m_systemDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDiskCount, allocator);
    }

    if (m_dataDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_dataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskSize, allocator);
    }

    if (m_dataDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskCount, allocator);
    }

    if (m_secondaryDataDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryDataDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryDataDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryDataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryDataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondaryDataDiskSize, allocator);
    }

    if (m_secondaryDataDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryDataDiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondaryDataDiskCount, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkInterfaceType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

}


string InstanceTypeQuota::GetZone() const
{
    return m_zone;
}

void InstanceTypeQuota::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceTypeQuota::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InstanceTypeQuota::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceTypeQuota::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceTypeQuota::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceTypeQuota::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void InstanceTypeQuota::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool InstanceTypeQuota::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string InstanceTypeQuota::GetInstanceFamilyName() const
{
    return m_instanceFamilyName;
}

void InstanceTypeQuota::SetInstanceFamilyName(const string& _instanceFamilyName)
{
    m_instanceFamilyName = _instanceFamilyName;
    m_instanceFamilyNameHasBeenSet = true;
}

bool InstanceTypeQuota::InstanceFamilyNameHasBeenSet() const
{
    return m_instanceFamilyNameHasBeenSet;
}

int64_t InstanceTypeQuota::GetCpuCores() const
{
    return m_cpuCores;
}

void InstanceTypeQuota::SetCpuCores(const int64_t& _cpuCores)
{
    m_cpuCores = _cpuCores;
    m_cpuCoresHasBeenSet = true;
}

bool InstanceTypeQuota::CpuCoresHasBeenSet() const
{
    return m_cpuCoresHasBeenSet;
}

string InstanceTypeQuota::GetCpuType() const
{
    return m_cpuType;
}

void InstanceTypeQuota::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool InstanceTypeQuota::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

int64_t InstanceTypeQuota::GetMemoryGb() const
{
    return m_memoryGb;
}

void InstanceTypeQuota::SetMemoryGb(const int64_t& _memoryGb)
{
    m_memoryGb = _memoryGb;
    m_memoryGbHasBeenSet = true;
}

bool InstanceTypeQuota::MemoryGbHasBeenSet() const
{
    return m_memoryGbHasBeenSet;
}

string InstanceTypeQuota::GetSystemDiskType() const
{
    return m_systemDiskType;
}

void InstanceTypeQuota::SetSystemDiskType(const string& _systemDiskType)
{
    m_systemDiskType = _systemDiskType;
    m_systemDiskTypeHasBeenSet = true;
}

bool InstanceTypeQuota::SystemDiskTypeHasBeenSet() const
{
    return m_systemDiskTypeHasBeenSet;
}

int64_t InstanceTypeQuota::GetSystemDiskSize() const
{
    return m_systemDiskSize;
}

void InstanceTypeQuota::SetSystemDiskSize(const int64_t& _systemDiskSize)
{
    m_systemDiskSize = _systemDiskSize;
    m_systemDiskSizeHasBeenSet = true;
}

bool InstanceTypeQuota::SystemDiskSizeHasBeenSet() const
{
    return m_systemDiskSizeHasBeenSet;
}

uint64_t InstanceTypeQuota::GetSystemDiskCount() const
{
    return m_systemDiskCount;
}

void InstanceTypeQuota::SetSystemDiskCount(const uint64_t& _systemDiskCount)
{
    m_systemDiskCount = _systemDiskCount;
    m_systemDiskCountHasBeenSet = true;
}

bool InstanceTypeQuota::SystemDiskCountHasBeenSet() const
{
    return m_systemDiskCountHasBeenSet;
}

string InstanceTypeQuota::GetDataDiskType() const
{
    return m_dataDiskType;
}

void InstanceTypeQuota::SetDataDiskType(const string& _dataDiskType)
{
    m_dataDiskType = _dataDiskType;
    m_dataDiskTypeHasBeenSet = true;
}

bool InstanceTypeQuota::DataDiskTypeHasBeenSet() const
{
    return m_dataDiskTypeHasBeenSet;
}

int64_t InstanceTypeQuota::GetDataDiskSize() const
{
    return m_dataDiskSize;
}

void InstanceTypeQuota::SetDataDiskSize(const int64_t& _dataDiskSize)
{
    m_dataDiskSize = _dataDiskSize;
    m_dataDiskSizeHasBeenSet = true;
}

bool InstanceTypeQuota::DataDiskSizeHasBeenSet() const
{
    return m_dataDiskSizeHasBeenSet;
}

uint64_t InstanceTypeQuota::GetDataDiskCount() const
{
    return m_dataDiskCount;
}

void InstanceTypeQuota::SetDataDiskCount(const uint64_t& _dataDiskCount)
{
    m_dataDiskCount = _dataDiskCount;
    m_dataDiskCountHasBeenSet = true;
}

bool InstanceTypeQuota::DataDiskCountHasBeenSet() const
{
    return m_dataDiskCountHasBeenSet;
}

string InstanceTypeQuota::GetSecondaryDataDiskType() const
{
    return m_secondaryDataDiskType;
}

void InstanceTypeQuota::SetSecondaryDataDiskType(const string& _secondaryDataDiskType)
{
    m_secondaryDataDiskType = _secondaryDataDiskType;
    m_secondaryDataDiskTypeHasBeenSet = true;
}

bool InstanceTypeQuota::SecondaryDataDiskTypeHasBeenSet() const
{
    return m_secondaryDataDiskTypeHasBeenSet;
}

int64_t InstanceTypeQuota::GetSecondaryDataDiskSize() const
{
    return m_secondaryDataDiskSize;
}

void InstanceTypeQuota::SetSecondaryDataDiskSize(const int64_t& _secondaryDataDiskSize)
{
    m_secondaryDataDiskSize = _secondaryDataDiskSize;
    m_secondaryDataDiskSizeHasBeenSet = true;
}

bool InstanceTypeQuota::SecondaryDataDiskSizeHasBeenSet() const
{
    return m_secondaryDataDiskSizeHasBeenSet;
}

int64_t InstanceTypeQuota::GetSecondaryDataDiskCount() const
{
    return m_secondaryDataDiskCount;
}

void InstanceTypeQuota::SetSecondaryDataDiskCount(const int64_t& _secondaryDataDiskCount)
{
    m_secondaryDataDiskCount = _secondaryDataDiskCount;
    m_secondaryDataDiskCountHasBeenSet = true;
}

bool InstanceTypeQuota::SecondaryDataDiskCountHasBeenSet() const
{
    return m_secondaryDataDiskCountHasBeenSet;
}

string InstanceTypeQuota::GetDiskType() const
{
    return m_diskType;
}

void InstanceTypeQuota::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool InstanceTypeQuota::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string InstanceTypeQuota::GetNetworkInterfaceType() const
{
    return m_networkInterfaceType;
}

void InstanceTypeQuota::SetNetworkInterfaceType(const string& _networkInterfaceType)
{
    m_networkInterfaceType = _networkInterfaceType;
    m_networkInterfaceTypeHasBeenSet = true;
}

bool InstanceTypeQuota::NetworkInterfaceTypeHasBeenSet() const
{
    return m_networkInterfaceTypeHasBeenSet;
}

string InstanceTypeQuota::GetGpuType() const
{
    return m_gpuType;
}

void InstanceTypeQuota::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool InstanceTypeQuota::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

uint64_t InstanceTypeQuota::GetQuota() const
{
    return m_quota;
}

void InstanceTypeQuota::SetQuota(const uint64_t& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool InstanceTypeQuota::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

