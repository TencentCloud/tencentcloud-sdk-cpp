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

#include <tencentcloud/postgres/v20170312/model/SpecItemInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

SpecItemInfo::SpecItemInfo() :
    m_specCodeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_minStorageHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_majorVersionHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_isSupportTDEHasBeenSet(false)
{
}

CoreInternalOutcome SpecItemInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecCode") && !value["SpecCode"].IsNull())
    {
        if (!value["SpecCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.SpecCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specCode = string(value["SpecCode"].GetString());
        m_specCodeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.MaxStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetUint64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("MinStorage") && !value["MinStorage"].IsNull())
    {
        if (!value["MinStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.MinStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorage = value["MinStorage"].GetUint64();
        m_minStorageHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.Pid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetUint64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MajorVersion") && !value["MajorVersion"].IsNull())
    {
        if (!value["MajorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.MajorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_majorVersion = string(value["MajorVersion"].GetString());
        m_majorVersionHasBeenSet = true;
    }

    if (value.HasMember("KernelVersion") && !value["KernelVersion"].IsNull())
    {
        if (!value["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(value["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }

    if (value.HasMember("IsSupportTDE") && !value["IsSupportTDE"].IsNull())
    {
        if (!value["IsSupportTDE"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItemInfo.IsSupportTDE` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportTDE = value["IsSupportTDE"].GetInt64();
        m_isSupportTDEHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecItemInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
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

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_minStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorage, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_majorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MajorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_majorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportTDEHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportTDE";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportTDE, allocator);
    }

}


string SpecItemInfo::GetSpecCode() const
{
    return m_specCode;
}

void SpecItemInfo::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool SpecItemInfo::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

string SpecItemInfo::GetVersion() const
{
    return m_version;
}

void SpecItemInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SpecItemInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SpecItemInfo::GetVersionName() const
{
    return m_versionName;
}

void SpecItemInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool SpecItemInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

uint64_t SpecItemInfo::GetCpu() const
{
    return m_cpu;
}

void SpecItemInfo::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool SpecItemInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t SpecItemInfo::GetMemory() const
{
    return m_memory;
}

void SpecItemInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool SpecItemInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t SpecItemInfo::GetMaxStorage() const
{
    return m_maxStorage;
}

void SpecItemInfo::SetMaxStorage(const uint64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool SpecItemInfo::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

uint64_t SpecItemInfo::GetMinStorage() const
{
    return m_minStorage;
}

void SpecItemInfo::SetMinStorage(const uint64_t& _minStorage)
{
    m_minStorage = _minStorage;
    m_minStorageHasBeenSet = true;
}

bool SpecItemInfo::MinStorageHasBeenSet() const
{
    return m_minStorageHasBeenSet;
}

uint64_t SpecItemInfo::GetQps() const
{
    return m_qps;
}

void SpecItemInfo::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool SpecItemInfo::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

uint64_t SpecItemInfo::GetPid() const
{
    return m_pid;
}

void SpecItemInfo::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool SpecItemInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string SpecItemInfo::GetType() const
{
    return m_type;
}

void SpecItemInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SpecItemInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SpecItemInfo::GetMajorVersion() const
{
    return m_majorVersion;
}

void SpecItemInfo::SetMajorVersion(const string& _majorVersion)
{
    m_majorVersion = _majorVersion;
    m_majorVersionHasBeenSet = true;
}

bool SpecItemInfo::MajorVersionHasBeenSet() const
{
    return m_majorVersionHasBeenSet;
}

string SpecItemInfo::GetKernelVersion() const
{
    return m_kernelVersion;
}

void SpecItemInfo::SetKernelVersion(const string& _kernelVersion)
{
    m_kernelVersion = _kernelVersion;
    m_kernelVersionHasBeenSet = true;
}

bool SpecItemInfo::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}

int64_t SpecItemInfo::GetIsSupportTDE() const
{
    return m_isSupportTDE;
}

void SpecItemInfo::SetIsSupportTDE(const int64_t& _isSupportTDE)
{
    m_isSupportTDE = _isSupportTDE;
    m_isSupportTDEHasBeenSet = true;
}

bool SpecItemInfo::IsSupportTDEHasBeenSet() const
{
    return m_isSupportTDEHasBeenSet;
}

