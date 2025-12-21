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

#include <tencentcloud/tke/v20220501/model/Machine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

Machine::Machine() :
    m_machineNameHasBeenSet(false),
    m_machineStateHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_loginStatusHasBeenSet(false),
    m_isProtectedFromScaleInHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_gPUHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_lanIPHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome Machine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineState") && !value["MachineState"].IsNull())
    {
        if (!value["MachineState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.MachineState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineState = string(value["MachineState"].GetString());
        m_machineStateHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("LoginStatus") && !value["LoginStatus"].IsNull())
    {
        if (!value["LoginStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.LoginStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginStatus = string(value["LoginStatus"].GetString());
        m_loginStatusHasBeenSet = true;
    }

    if (value.HasMember("IsProtectedFromScaleIn") && !value["IsProtectedFromScaleIn"].IsNull())
    {
        if (!value["IsProtectedFromScaleIn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.IsProtectedFromScaleIn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProtectedFromScaleIn = value["IsProtectedFromScaleIn"].GetBool();
        m_isProtectedFromScaleInHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("GPU") && !value["GPU"].IsNull())
    {
        if (!value["GPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.GPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gPU = value["GPU"].GetUint64();
        m_gPUHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("LanIP") && !value["LanIP"].IsNull())
    {
        if (!value["LanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.LanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIP = string(value["LanIP"].GetString());
        m_lanIPHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Machine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineState.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_loginStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isProtectedFromScaleInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProtectedFromScaleIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProtectedFromScaleIn, allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_gPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPU, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_lanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

}


string Machine::GetMachineName() const
{
    return m_machineName;
}

void Machine::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool Machine::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string Machine::GetMachineState() const
{
    return m_machineState;
}

void Machine::SetMachineState(const string& _machineState)
{
    m_machineState = _machineState;
    m_machineStateHasBeenSet = true;
}

bool Machine::MachineStateHasBeenSet() const
{
    return m_machineStateHasBeenSet;
}

string Machine::GetZone() const
{
    return m_zone;
}

void Machine::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Machine::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Machine::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void Machine::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool Machine::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string Machine::GetCreatedAt() const
{
    return m_createdAt;
}

void Machine::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Machine::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Machine::GetLoginStatus() const
{
    return m_loginStatus;
}

void Machine::SetLoginStatus(const string& _loginStatus)
{
    m_loginStatus = _loginStatus;
    m_loginStatusHasBeenSet = true;
}

bool Machine::LoginStatusHasBeenSet() const
{
    return m_loginStatusHasBeenSet;
}

bool Machine::GetIsProtectedFromScaleIn() const
{
    return m_isProtectedFromScaleIn;
}

void Machine::SetIsProtectedFromScaleIn(const bool& _isProtectedFromScaleIn)
{
    m_isProtectedFromScaleIn = _isProtectedFromScaleIn;
    m_isProtectedFromScaleInHasBeenSet = true;
}

bool Machine::IsProtectedFromScaleInHasBeenSet() const
{
    return m_isProtectedFromScaleInHasBeenSet;
}

string Machine::GetDisplayName() const
{
    return m_displayName;
}

void Machine::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool Machine::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

uint64_t Machine::GetCPU() const
{
    return m_cPU;
}

void Machine::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool Machine::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t Machine::GetGPU() const
{
    return m_gPU;
}

void Machine::SetGPU(const uint64_t& _gPU)
{
    m_gPU = _gPU;
    m_gPUHasBeenSet = true;
}

bool Machine::GPUHasBeenSet() const
{
    return m_gPUHasBeenSet;
}

string Machine::GetRenewFlag() const
{
    return m_renewFlag;
}

void Machine::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool Machine::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string Machine::GetPayMode() const
{
    return m_payMode;
}

void Machine::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Machine::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t Machine::GetMemory() const
{
    return m_memory;
}

void Machine::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Machine::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

Disk Machine::GetSystemDisk() const
{
    return m_systemDisk;
}

void Machine::SetSystemDisk(const Disk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool Machine::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

InternetAccessible Machine::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void Machine::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool Machine::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string Machine::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void Machine::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool Machine::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string Machine::GetLanIP() const
{
    return m_lanIP;
}

void Machine::SetLanIP(const string& _lanIP)
{
    m_lanIP = _lanIP;
    m_lanIPHasBeenSet = true;
}

bool Machine::LanIPHasBeenSet() const
{
    return m_lanIPHasBeenSet;
}

string Machine::GetInstanceType() const
{
    return m_instanceType;
}

void Machine::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Machine::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string Machine::GetExpiredTime() const
{
    return m_expiredTime;
}

void Machine::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool Machine::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

