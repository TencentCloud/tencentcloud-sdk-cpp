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

#include <tencentcloud/sqlserver/v20180328/model/SpecInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

SpecInfo::SpecInfo() :
    m_specIdHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_machineTypeNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_minStorageHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_qPSHasBeenSet(false),
    m_suitInfoHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_postPidHasBeenSet(false),
    m_payModeStatusHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_multiZonesStatusHasBeenSet(false)
{
}

CoreInternalOutcome SpecInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.SpecId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_specId = value["SpecId"].GetInt64();
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("MachineTypeName") && !value["MachineTypeName"].IsNull())
    {
        if (!value["MachineTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.MachineTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineTypeName = string(value["MachineTypeName"].GetString());
        m_machineTypeNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("MinStorage") && !value["MinStorage"].IsNull())
    {
        if (!value["MinStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.MinStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorage = value["MinStorage"].GetInt64();
        m_minStorageHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.MaxStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetInt64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("QPS") && !value["QPS"].IsNull())
    {
        if (!value["QPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.QPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qPS = value["QPS"].GetInt64();
        m_qPSHasBeenSet = true;
    }

    if (value.HasMember("SuitInfo") && !value["SuitInfo"].IsNull())
    {
        if (!value["SuitInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.SuitInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suitInfo = string(value["SuitInfo"].GetString());
        m_suitInfoHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("PostPid") && !value["PostPid"].IsNull())
    {
        if (!value["PostPid"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpecInfo.PostPid` is not array type"));

        const rapidjson::Value &tmpValue = value["PostPid"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_postPid.push_back((*itr).GetInt64());
        }
        m_postPidHasBeenSet = true;
    }

    if (value.HasMember("PayModeStatus") && !value["PayModeStatus"].IsNull())
    {
        if (!value["PayModeStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.PayModeStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payModeStatus = string(value["PayModeStatus"].GetString());
        m_payModeStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MultiZonesStatus") && !value["MultiZonesStatus"].IsNull())
    {
        if (!value["MultiZonesStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecInfo.MultiZonesStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_multiZonesStatus = string(value["MultiZonesStatus"].GetString());
        m_multiZonesStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_specId, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineTypeName.c_str(), allocator).Move(), allocator);
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

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_minStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorage, allocator);
    }

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_qPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qPS, allocator);
    }

    if (m_suitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuitInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suitInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_postPidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostPid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_postPid.begin(); itr != m_postPid.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_payModeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayModeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payModeStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_multiZonesStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZonesStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_multiZonesStatus.c_str(), allocator).Move(), allocator);
    }

}


int64_t SpecInfo::GetSpecId() const
{
    return m_specId;
}

void SpecInfo::SetSpecId(const int64_t& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool SpecInfo::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

string SpecInfo::GetMachineType() const
{
    return m_machineType;
}

void SpecInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool SpecInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string SpecInfo::GetMachineTypeName() const
{
    return m_machineTypeName;
}

void SpecInfo::SetMachineTypeName(const string& _machineTypeName)
{
    m_machineTypeName = _machineTypeName;
    m_machineTypeNameHasBeenSet = true;
}

bool SpecInfo::MachineTypeNameHasBeenSet() const
{
    return m_machineTypeNameHasBeenSet;
}

string SpecInfo::GetVersion() const
{
    return m_version;
}

void SpecInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SpecInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SpecInfo::GetVersionName() const
{
    return m_versionName;
}

void SpecInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool SpecInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t SpecInfo::GetMemory() const
{
    return m_memory;
}

void SpecInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool SpecInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t SpecInfo::GetCPU() const
{
    return m_cPU;
}

void SpecInfo::SetCPU(const int64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool SpecInfo::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

int64_t SpecInfo::GetMinStorage() const
{
    return m_minStorage;
}

void SpecInfo::SetMinStorage(const int64_t& _minStorage)
{
    m_minStorage = _minStorage;
    m_minStorageHasBeenSet = true;
}

bool SpecInfo::MinStorageHasBeenSet() const
{
    return m_minStorageHasBeenSet;
}

int64_t SpecInfo::GetMaxStorage() const
{
    return m_maxStorage;
}

void SpecInfo::SetMaxStorage(const int64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool SpecInfo::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

int64_t SpecInfo::GetQPS() const
{
    return m_qPS;
}

void SpecInfo::SetQPS(const int64_t& _qPS)
{
    m_qPS = _qPS;
    m_qPSHasBeenSet = true;
}

bool SpecInfo::QPSHasBeenSet() const
{
    return m_qPSHasBeenSet;
}

string SpecInfo::GetSuitInfo() const
{
    return m_suitInfo;
}

void SpecInfo::SetSuitInfo(const string& _suitInfo)
{
    m_suitInfo = _suitInfo;
    m_suitInfoHasBeenSet = true;
}

bool SpecInfo::SuitInfoHasBeenSet() const
{
    return m_suitInfoHasBeenSet;
}

int64_t SpecInfo::GetPid() const
{
    return m_pid;
}

void SpecInfo::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool SpecInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

vector<int64_t> SpecInfo::GetPostPid() const
{
    return m_postPid;
}

void SpecInfo::SetPostPid(const vector<int64_t>& _postPid)
{
    m_postPid = _postPid;
    m_postPidHasBeenSet = true;
}

bool SpecInfo::PostPidHasBeenSet() const
{
    return m_postPidHasBeenSet;
}

string SpecInfo::GetPayModeStatus() const
{
    return m_payModeStatus;
}

void SpecInfo::SetPayModeStatus(const string& _payModeStatus)
{
    m_payModeStatus = _payModeStatus;
    m_payModeStatusHasBeenSet = true;
}

bool SpecInfo::PayModeStatusHasBeenSet() const
{
    return m_payModeStatusHasBeenSet;
}

string SpecInfo::GetInstanceType() const
{
    return m_instanceType;
}

void SpecInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool SpecInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string SpecInfo::GetMultiZonesStatus() const
{
    return m_multiZonesStatus;
}

void SpecInfo::SetMultiZonesStatus(const string& _multiZonesStatus)
{
    m_multiZonesStatus = _multiZonesStatus;
    m_multiZonesStatusHasBeenSet = true;
}

bool SpecInfo::MultiZonesStatusHasBeenSet() const
{
    return m_multiZonesStatusHasBeenSet;
}

