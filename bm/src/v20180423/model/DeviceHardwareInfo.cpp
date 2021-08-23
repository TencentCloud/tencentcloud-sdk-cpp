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

#include <tencentcloud/bm/v20180423/model/DeviceHardwareInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DeviceHardwareInfo::DeviceHardwareInfo() :
    m_instanceIdHasBeenSet(false),
    m_isElasticHasBeenSet(false),
    m_cpmPayModeHasBeenSet(false),
    m_cpuIdHasBeenSet(false),
    m_memHasBeenSet(false),
    m_containRaidCardHasBeenSet(false),
    m_systemDiskTypeIdHasBeenSet(false),
    m_systemDiskCountHasBeenSet(false),
    m_dataDiskTypeIdHasBeenSet(false),
    m_dataDiskCountHasBeenSet(false),
    m_cpuDescriptionHasBeenSet(false),
    m_memDescriptionHasBeenSet(false),
    m_diskDescriptionHasBeenSet(false),
    m_nicDescriptionHasBeenSet(false),
    m_raidDescriptionHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_deviceClassCodeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceHardwareInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("IsElastic") && !value["IsElastic"].IsNull())
    {
        if (!value["IsElastic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.IsElastic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isElastic = value["IsElastic"].GetUint64();
        m_isElasticHasBeenSet = true;
    }

    if (value.HasMember("CpmPayMode") && !value["CpmPayMode"].IsNull())
    {
        if (!value["CpmPayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.CpmPayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpmPayMode = value["CpmPayMode"].GetUint64();
        m_cpmPayModeHasBeenSet = true;
    }

    if (value.HasMember("CpuId") && !value["CpuId"].IsNull())
    {
        if (!value["CpuId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.CpuId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuId = value["CpuId"].GetUint64();
        m_cpuIdHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.Mem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetUint64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("ContainRaidCard") && !value["ContainRaidCard"].IsNull())
    {
        if (!value["ContainRaidCard"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.ContainRaidCard` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containRaidCard = value["ContainRaidCard"].GetUint64();
        m_containRaidCardHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskTypeId") && !value["SystemDiskTypeId"].IsNull())
    {
        if (!value["SystemDiskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.SystemDiskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskTypeId = value["SystemDiskTypeId"].GetUint64();
        m_systemDiskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskCount") && !value["SystemDiskCount"].IsNull())
    {
        if (!value["SystemDiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.SystemDiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_systemDiskCount = value["SystemDiskCount"].GetUint64();
        m_systemDiskCountHasBeenSet = true;
    }

    if (value.HasMember("DataDiskTypeId") && !value["DataDiskTypeId"].IsNull())
    {
        if (!value["DataDiskTypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.DataDiskTypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskTypeId = value["DataDiskTypeId"].GetUint64();
        m_dataDiskTypeIdHasBeenSet = true;
    }

    if (value.HasMember("DataDiskCount") && !value["DataDiskCount"].IsNull())
    {
        if (!value["DataDiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.DataDiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskCount = value["DataDiskCount"].GetUint64();
        m_dataDiskCountHasBeenSet = true;
    }

    if (value.HasMember("CpuDescription") && !value["CpuDescription"].IsNull())
    {
        if (!value["CpuDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.CpuDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuDescription = string(value["CpuDescription"].GetString());
        m_cpuDescriptionHasBeenSet = true;
    }

    if (value.HasMember("MemDescription") && !value["MemDescription"].IsNull())
    {
        if (!value["MemDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.MemDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memDescription = string(value["MemDescription"].GetString());
        m_memDescriptionHasBeenSet = true;
    }

    if (value.HasMember("DiskDescription") && !value["DiskDescription"].IsNull())
    {
        if (!value["DiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.DiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskDescription = string(value["DiskDescription"].GetString());
        m_diskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("NicDescription") && !value["NicDescription"].IsNull())
    {
        if (!value["NicDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.NicDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nicDescription = string(value["NicDescription"].GetString());
        m_nicDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RaidDescription") && !value["RaidDescription"].IsNull())
    {
        if (!value["RaidDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.RaidDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_raidDescription = string(value["RaidDescription"].GetString());
        m_raidDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("DeviceClassCode") && !value["DeviceClassCode"].IsNull())
    {
        if (!value["DeviceClassCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceHardwareInfo.DeviceClassCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceClassCode = string(value["DeviceClassCode"].GetString());
        m_deviceClassCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceHardwareInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isElasticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsElastic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isElastic, allocator);
    }

    if (m_cpmPayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpmPayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpmPayMode, allocator);
    }

    if (m_cpuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuId, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_containRaidCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainRaidCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containRaidCard, allocator);
    }

    if (m_systemDiskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDiskTypeId, allocator);
    }

    if (m_systemDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_systemDiskCount, allocator);
    }

    if (m_dataDiskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskTypeId, allocator);
    }

    if (m_dataDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskCount, allocator);
    }

    if (m_cpuDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_memDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_diskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_nicDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NicDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nicDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_raidDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaidDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_raidDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_deviceClassCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
    }

}


string DeviceHardwareInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DeviceHardwareInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeviceHardwareInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetIsElastic() const
{
    return m_isElastic;
}

void DeviceHardwareInfo::SetIsElastic(const uint64_t& _isElastic)
{
    m_isElastic = _isElastic;
    m_isElasticHasBeenSet = true;
}

bool DeviceHardwareInfo::IsElasticHasBeenSet() const
{
    return m_isElasticHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetCpmPayMode() const
{
    return m_cpmPayMode;
}

void DeviceHardwareInfo::SetCpmPayMode(const uint64_t& _cpmPayMode)
{
    m_cpmPayMode = _cpmPayMode;
    m_cpmPayModeHasBeenSet = true;
}

bool DeviceHardwareInfo::CpmPayModeHasBeenSet() const
{
    return m_cpmPayModeHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetCpuId() const
{
    return m_cpuId;
}

void DeviceHardwareInfo::SetCpuId(const uint64_t& _cpuId)
{
    m_cpuId = _cpuId;
    m_cpuIdHasBeenSet = true;
}

bool DeviceHardwareInfo::CpuIdHasBeenSet() const
{
    return m_cpuIdHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetMem() const
{
    return m_mem;
}

void DeviceHardwareInfo::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool DeviceHardwareInfo::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetContainRaidCard() const
{
    return m_containRaidCard;
}

void DeviceHardwareInfo::SetContainRaidCard(const uint64_t& _containRaidCard)
{
    m_containRaidCard = _containRaidCard;
    m_containRaidCardHasBeenSet = true;
}

bool DeviceHardwareInfo::ContainRaidCardHasBeenSet() const
{
    return m_containRaidCardHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetSystemDiskTypeId() const
{
    return m_systemDiskTypeId;
}

void DeviceHardwareInfo::SetSystemDiskTypeId(const uint64_t& _systemDiskTypeId)
{
    m_systemDiskTypeId = _systemDiskTypeId;
    m_systemDiskTypeIdHasBeenSet = true;
}

bool DeviceHardwareInfo::SystemDiskTypeIdHasBeenSet() const
{
    return m_systemDiskTypeIdHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetSystemDiskCount() const
{
    return m_systemDiskCount;
}

void DeviceHardwareInfo::SetSystemDiskCount(const uint64_t& _systemDiskCount)
{
    m_systemDiskCount = _systemDiskCount;
    m_systemDiskCountHasBeenSet = true;
}

bool DeviceHardwareInfo::SystemDiskCountHasBeenSet() const
{
    return m_systemDiskCountHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetDataDiskTypeId() const
{
    return m_dataDiskTypeId;
}

void DeviceHardwareInfo::SetDataDiskTypeId(const uint64_t& _dataDiskTypeId)
{
    m_dataDiskTypeId = _dataDiskTypeId;
    m_dataDiskTypeIdHasBeenSet = true;
}

bool DeviceHardwareInfo::DataDiskTypeIdHasBeenSet() const
{
    return m_dataDiskTypeIdHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetDataDiskCount() const
{
    return m_dataDiskCount;
}

void DeviceHardwareInfo::SetDataDiskCount(const uint64_t& _dataDiskCount)
{
    m_dataDiskCount = _dataDiskCount;
    m_dataDiskCountHasBeenSet = true;
}

bool DeviceHardwareInfo::DataDiskCountHasBeenSet() const
{
    return m_dataDiskCountHasBeenSet;
}

string DeviceHardwareInfo::GetCpuDescription() const
{
    return m_cpuDescription;
}

void DeviceHardwareInfo::SetCpuDescription(const string& _cpuDescription)
{
    m_cpuDescription = _cpuDescription;
    m_cpuDescriptionHasBeenSet = true;
}

bool DeviceHardwareInfo::CpuDescriptionHasBeenSet() const
{
    return m_cpuDescriptionHasBeenSet;
}

string DeviceHardwareInfo::GetMemDescription() const
{
    return m_memDescription;
}

void DeviceHardwareInfo::SetMemDescription(const string& _memDescription)
{
    m_memDescription = _memDescription;
    m_memDescriptionHasBeenSet = true;
}

bool DeviceHardwareInfo::MemDescriptionHasBeenSet() const
{
    return m_memDescriptionHasBeenSet;
}

string DeviceHardwareInfo::GetDiskDescription() const
{
    return m_diskDescription;
}

void DeviceHardwareInfo::SetDiskDescription(const string& _diskDescription)
{
    m_diskDescription = _diskDescription;
    m_diskDescriptionHasBeenSet = true;
}

bool DeviceHardwareInfo::DiskDescriptionHasBeenSet() const
{
    return m_diskDescriptionHasBeenSet;
}

string DeviceHardwareInfo::GetNicDescription() const
{
    return m_nicDescription;
}

void DeviceHardwareInfo::SetNicDescription(const string& _nicDescription)
{
    m_nicDescription = _nicDescription;
    m_nicDescriptionHasBeenSet = true;
}

bool DeviceHardwareInfo::NicDescriptionHasBeenSet() const
{
    return m_nicDescriptionHasBeenSet;
}

string DeviceHardwareInfo::GetRaidDescription() const
{
    return m_raidDescription;
}

void DeviceHardwareInfo::SetRaidDescription(const string& _raidDescription)
{
    m_raidDescription = _raidDescription;
    m_raidDescriptionHasBeenSet = true;
}

bool DeviceHardwareInfo::RaidDescriptionHasBeenSet() const
{
    return m_raidDescriptionHasBeenSet;
}

uint64_t DeviceHardwareInfo::GetCpu() const
{
    return m_cpu;
}

void DeviceHardwareInfo::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DeviceHardwareInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string DeviceHardwareInfo::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void DeviceHardwareInfo::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool DeviceHardwareInfo::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

