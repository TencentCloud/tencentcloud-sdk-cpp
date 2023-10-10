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

#include <tencentcloud/cwp/v20180228/model/ScreenMachine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScreenMachine::ScreenMachine() :
    m_machineNameHasBeenSet(false),
    m_machineOsHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_vulNumHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_baselineNumHasBeenSet(false),
    m_cyberAttackNumHasBeenSet(false),
    m_securityStatusHasBeenSet(false),
    m_invasionNumHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_cpuLoadHasBeenSet(false),
    m_cpuSizeHasBeenSet(false),
    m_diskLoadHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_memLoadHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_coreVersionHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome ScreenMachine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineOs") && !value["MachineOs"].IsNull())
    {
        if (!value["MachineOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MachineOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineOs = string(value["MachineOs"].GetString());
        m_machineOsHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MachineStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = value["MachineStatus"].GetUint64();
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("VulNum") && !value["VulNum"].IsNull())
    {
        if (!value["VulNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.VulNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulNum = value["VulNum"].GetInt64();
        m_vulNumHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("BaselineNum") && !value["BaselineNum"].IsNull())
    {
        if (!value["BaselineNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.BaselineNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineNum = value["BaselineNum"].GetInt64();
        m_baselineNumHasBeenSet = true;
    }

    if (value.HasMember("CyberAttackNum") && !value["CyberAttackNum"].IsNull())
    {
        if (!value["CyberAttackNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.CyberAttackNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cyberAttackNum = value["CyberAttackNum"].GetInt64();
        m_cyberAttackNumHasBeenSet = true;
    }

    if (value.HasMember("SecurityStatus") && !value["SecurityStatus"].IsNull())
    {
        if (!value["SecurityStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.SecurityStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityStatus = string(value["SecurityStatus"].GetString());
        m_securityStatusHasBeenSet = true;
    }

    if (value.HasMember("InvasionNum") && !value["InvasionNum"].IsNull())
    {
        if (!value["InvasionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.InvasionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invasionNum = value["InvasionNum"].GetInt64();
        m_invasionNumHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("CpuLoad") && !value["CpuLoad"].IsNull())
    {
        if (!value["CpuLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.CpuLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLoad = string(value["CpuLoad"].GetString());
        m_cpuLoadHasBeenSet = true;
    }

    if (value.HasMember("CpuSize") && !value["CpuSize"].IsNull())
    {
        if (!value["CpuSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.CpuSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSize = value["CpuSize"].GetDouble();
        m_cpuSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskLoad") && !value["DiskLoad"].IsNull())
    {
        if (!value["DiskLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.DiskLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskLoad = string(value["DiskLoad"].GetString());
        m_diskLoadHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.DiskSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetDouble();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("MemLoad") && !value["MemLoad"].IsNull())
    {
        if (!value["MemLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MemLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memLoad = string(value["MemLoad"].GetString());
        m_memLoadHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MemSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetDouble();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("CoreVersion") && !value["CoreVersion"].IsNull())
    {
        if (!value["CoreVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.CoreVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreVersion = string(value["CoreVersion"].GetString());
        m_coreVersionHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenMachine.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenMachine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineOs.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineStatus, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulNum, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineNum, allocator);
    }

    if (m_cyberAttackNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CyberAttackNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cyberAttackNum, allocator);
    }

    if (m_securityStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_invasionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvasionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invasionNum, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuSize, allocator);
    }

    if (m_diskLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_memLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_coreVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ScreenMachine::GetMachineName() const
{
    return m_machineName;
}

void ScreenMachine::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool ScreenMachine::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string ScreenMachine::GetMachineOs() const
{
    return m_machineOs;
}

void ScreenMachine::SetMachineOs(const string& _machineOs)
{
    m_machineOs = _machineOs;
    m_machineOsHasBeenSet = true;
}

bool ScreenMachine::MachineOsHasBeenSet() const
{
    return m_machineOsHasBeenSet;
}

string ScreenMachine::GetUuid() const
{
    return m_uuid;
}

void ScreenMachine::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ScreenMachine::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

uint64_t ScreenMachine::GetMachineStatus() const
{
    return m_machineStatus;
}

void ScreenMachine::SetMachineStatus(const uint64_t& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool ScreenMachine::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string ScreenMachine::GetQuuid() const
{
    return m_quuid;
}

void ScreenMachine::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ScreenMachine::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

int64_t ScreenMachine::GetVulNum() const
{
    return m_vulNum;
}

void ScreenMachine::SetVulNum(const int64_t& _vulNum)
{
    m_vulNum = _vulNum;
    m_vulNumHasBeenSet = true;
}

bool ScreenMachine::VulNumHasBeenSet() const
{
    return m_vulNumHasBeenSet;
}

string ScreenMachine::GetMachineIp() const
{
    return m_machineIp;
}

void ScreenMachine::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool ScreenMachine::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string ScreenMachine::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void ScreenMachine::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool ScreenMachine::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

int64_t ScreenMachine::GetBaselineNum() const
{
    return m_baselineNum;
}

void ScreenMachine::SetBaselineNum(const int64_t& _baselineNum)
{
    m_baselineNum = _baselineNum;
    m_baselineNumHasBeenSet = true;
}

bool ScreenMachine::BaselineNumHasBeenSet() const
{
    return m_baselineNumHasBeenSet;
}

int64_t ScreenMachine::GetCyberAttackNum() const
{
    return m_cyberAttackNum;
}

void ScreenMachine::SetCyberAttackNum(const int64_t& _cyberAttackNum)
{
    m_cyberAttackNum = _cyberAttackNum;
    m_cyberAttackNumHasBeenSet = true;
}

bool ScreenMachine::CyberAttackNumHasBeenSet() const
{
    return m_cyberAttackNumHasBeenSet;
}

string ScreenMachine::GetSecurityStatus() const
{
    return m_securityStatus;
}

void ScreenMachine::SetSecurityStatus(const string& _securityStatus)
{
    m_securityStatus = _securityStatus;
    m_securityStatusHasBeenSet = true;
}

bool ScreenMachine::SecurityStatusHasBeenSet() const
{
    return m_securityStatusHasBeenSet;
}

int64_t ScreenMachine::GetInvasionNum() const
{
    return m_invasionNum;
}

void ScreenMachine::SetInvasionNum(const int64_t& _invasionNum)
{
    m_invasionNum = _invasionNum;
    m_invasionNumHasBeenSet = true;
}

bool ScreenMachine::InvasionNumHasBeenSet() const
{
    return m_invasionNumHasBeenSet;
}

string ScreenMachine::GetMachineType() const
{
    return m_machineType;
}

void ScreenMachine::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool ScreenMachine::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string ScreenMachine::GetCpuLoad() const
{
    return m_cpuLoad;
}

void ScreenMachine::SetCpuLoad(const string& _cpuLoad)
{
    m_cpuLoad = _cpuLoad;
    m_cpuLoadHasBeenSet = true;
}

bool ScreenMachine::CpuLoadHasBeenSet() const
{
    return m_cpuLoadHasBeenSet;
}

double ScreenMachine::GetCpuSize() const
{
    return m_cpuSize;
}

void ScreenMachine::SetCpuSize(const double& _cpuSize)
{
    m_cpuSize = _cpuSize;
    m_cpuSizeHasBeenSet = true;
}

bool ScreenMachine::CpuSizeHasBeenSet() const
{
    return m_cpuSizeHasBeenSet;
}

string ScreenMachine::GetDiskLoad() const
{
    return m_diskLoad;
}

void ScreenMachine::SetDiskLoad(const string& _diskLoad)
{
    m_diskLoad = _diskLoad;
    m_diskLoadHasBeenSet = true;
}

bool ScreenMachine::DiskLoadHasBeenSet() const
{
    return m_diskLoadHasBeenSet;
}

double ScreenMachine::GetDiskSize() const
{
    return m_diskSize;
}

void ScreenMachine::SetDiskSize(const double& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool ScreenMachine::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string ScreenMachine::GetMemLoad() const
{
    return m_memLoad;
}

void ScreenMachine::SetMemLoad(const string& _memLoad)
{
    m_memLoad = _memLoad;
    m_memLoadHasBeenSet = true;
}

bool ScreenMachine::MemLoadHasBeenSet() const
{
    return m_memLoadHasBeenSet;
}

double ScreenMachine::GetMemSize() const
{
    return m_memSize;
}

void ScreenMachine::SetMemSize(const double& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool ScreenMachine::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

string ScreenMachine::GetCoreVersion() const
{
    return m_coreVersion;
}

void ScreenMachine::SetCoreVersion(const string& _coreVersion)
{
    m_coreVersion = _coreVersion;
    m_coreVersionHasBeenSet = true;
}

bool ScreenMachine::CoreVersionHasBeenSet() const
{
    return m_coreVersionHasBeenSet;
}

MachineExtraInfo ScreenMachine::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void ScreenMachine::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool ScreenMachine::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

