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

#include <tencentcloud/dbdc/v20201029/model/HostDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

HostDetail::HostDetail() :
    m_hostIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_assignStatusHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_dbNumHasBeenSet(false),
    m_cpuSpecHasBeenSet(false),
    m_cpuAssignedHasBeenSet(false),
    m_cpuAssignableHasBeenSet(false),
    m_memorySpecHasBeenSet(false),
    m_memoryAssignedHasBeenSet(false),
    m_memoryAssignableHasBeenSet(false),
    m_diskSpecHasBeenSet(false),
    m_diskAssignedHasBeenSet(false),
    m_diskAssignableHasBeenSet(false),
    m_cpuRatioHasBeenSet(false),
    m_memoryRatioHasBeenSet(false),
    m_diskRatioHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_pidTagHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome HostDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AssignStatus") && !value["AssignStatus"].IsNull())
    {
        if (!value["AssignStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.AssignStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assignStatus = value["AssignStatus"].GetInt64();
        m_assignStatusHasBeenSet = true;
    }

    if (value.HasMember("HostType") && !value["HostType"].IsNull())
    {
        if (!value["HostType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.HostType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostType = value["HostType"].GetInt64();
        m_hostTypeHasBeenSet = true;
    }

    if (value.HasMember("DbNum") && !value["DbNum"].IsNull())
    {
        if (!value["DbNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.DbNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbNum = value["DbNum"].GetInt64();
        m_dbNumHasBeenSet = true;
    }

    if (value.HasMember("CpuSpec") && !value["CpuSpec"].IsNull())
    {
        if (!value["CpuSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.CpuSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSpec = value["CpuSpec"].GetInt64();
        m_cpuSpecHasBeenSet = true;
    }

    if (value.HasMember("CpuAssigned") && !value["CpuAssigned"].IsNull())
    {
        if (!value["CpuAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.CpuAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAssigned = value["CpuAssigned"].GetInt64();
        m_cpuAssignedHasBeenSet = true;
    }

    if (value.HasMember("CpuAssignable") && !value["CpuAssignable"].IsNull())
    {
        if (!value["CpuAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.CpuAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAssignable = value["CpuAssignable"].GetInt64();
        m_cpuAssignableHasBeenSet = true;
    }

    if (value.HasMember("MemorySpec") && !value["MemorySpec"].IsNull())
    {
        if (!value["MemorySpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.MemorySpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memorySpec = value["MemorySpec"].GetInt64();
        m_memorySpecHasBeenSet = true;
    }

    if (value.HasMember("MemoryAssigned") && !value["MemoryAssigned"].IsNull())
    {
        if (!value["MemoryAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.MemoryAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryAssigned = value["MemoryAssigned"].GetInt64();
        m_memoryAssignedHasBeenSet = true;
    }

    if (value.HasMember("MemoryAssignable") && !value["MemoryAssignable"].IsNull())
    {
        if (!value["MemoryAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.MemoryAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryAssignable = value["MemoryAssignable"].GetInt64();
        m_memoryAssignableHasBeenSet = true;
    }

    if (value.HasMember("DiskSpec") && !value["DiskSpec"].IsNull())
    {
        if (!value["DiskSpec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.DiskSpec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSpec = value["DiskSpec"].GetInt64();
        m_diskSpecHasBeenSet = true;
    }

    if (value.HasMember("DiskAssigned") && !value["DiskAssigned"].IsNull())
    {
        if (!value["DiskAssigned"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.DiskAssigned` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAssigned = value["DiskAssigned"].GetInt64();
        m_diskAssignedHasBeenSet = true;
    }

    if (value.HasMember("DiskAssignable") && !value["DiskAssignable"].IsNull())
    {
        if (!value["DiskAssignable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.DiskAssignable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAssignable = value["DiskAssignable"].GetInt64();
        m_diskAssignableHasBeenSet = true;
    }

    if (value.HasMember("CpuRatio") && !value["CpuRatio"].IsNull())
    {
        if (!value["CpuRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.CpuRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuRatio = value["CpuRatio"].GetDouble();
        m_cpuRatioHasBeenSet = true;
    }

    if (value.HasMember("MemoryRatio") && !value["MemoryRatio"].IsNull())
    {
        if (!value["MemoryRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.MemoryRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryRatio = value["MemoryRatio"].GetDouble();
        m_memoryRatioHasBeenSet = true;
    }

    if (value.HasMember("DiskRatio") && !value["DiskRatio"].IsNull())
    {
        if (!value["DiskRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.DiskRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_diskRatio = value["DiskRatio"].GetDouble();
        m_diskRatioHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("PidTag") && !value["PidTag"].IsNull())
    {
        if (!value["PidTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.PidTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pidTag = string(value["PidTag"].GetString());
        m_pidTagHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_assignStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssignStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assignStatus, allocator);
    }

    if (m_hostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostType, allocator);
    }

    if (m_dbNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbNum, allocator);
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

    if (m_cpuRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuRatio, allocator);
    }

    if (m_memoryRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryRatio, allocator);
    }

    if (m_diskRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskRatio, allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_pidTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PidTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pidTag.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string HostDetail::GetHostId() const
{
    return m_hostId;
}

void HostDetail::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool HostDetail::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string HostDetail::GetHostName() const
{
    return m_hostName;
}

void HostDetail::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool HostDetail::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string HostDetail::GetZone() const
{
    return m_zone;
}

void HostDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool HostDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t HostDetail::GetStatus() const
{
    return m_status;
}

void HostDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HostDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t HostDetail::GetAssignStatus() const
{
    return m_assignStatus;
}

void HostDetail::SetAssignStatus(const int64_t& _assignStatus)
{
    m_assignStatus = _assignStatus;
    m_assignStatusHasBeenSet = true;
}

bool HostDetail::AssignStatusHasBeenSet() const
{
    return m_assignStatusHasBeenSet;
}

int64_t HostDetail::GetHostType() const
{
    return m_hostType;
}

void HostDetail::SetHostType(const int64_t& _hostType)
{
    m_hostType = _hostType;
    m_hostTypeHasBeenSet = true;
}

bool HostDetail::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

int64_t HostDetail::GetDbNum() const
{
    return m_dbNum;
}

void HostDetail::SetDbNum(const int64_t& _dbNum)
{
    m_dbNum = _dbNum;
    m_dbNumHasBeenSet = true;
}

bool HostDetail::DbNumHasBeenSet() const
{
    return m_dbNumHasBeenSet;
}

int64_t HostDetail::GetCpuSpec() const
{
    return m_cpuSpec;
}

void HostDetail::SetCpuSpec(const int64_t& _cpuSpec)
{
    m_cpuSpec = _cpuSpec;
    m_cpuSpecHasBeenSet = true;
}

bool HostDetail::CpuSpecHasBeenSet() const
{
    return m_cpuSpecHasBeenSet;
}

int64_t HostDetail::GetCpuAssigned() const
{
    return m_cpuAssigned;
}

void HostDetail::SetCpuAssigned(const int64_t& _cpuAssigned)
{
    m_cpuAssigned = _cpuAssigned;
    m_cpuAssignedHasBeenSet = true;
}

bool HostDetail::CpuAssignedHasBeenSet() const
{
    return m_cpuAssignedHasBeenSet;
}

int64_t HostDetail::GetCpuAssignable() const
{
    return m_cpuAssignable;
}

void HostDetail::SetCpuAssignable(const int64_t& _cpuAssignable)
{
    m_cpuAssignable = _cpuAssignable;
    m_cpuAssignableHasBeenSet = true;
}

bool HostDetail::CpuAssignableHasBeenSet() const
{
    return m_cpuAssignableHasBeenSet;
}

int64_t HostDetail::GetMemorySpec() const
{
    return m_memorySpec;
}

void HostDetail::SetMemorySpec(const int64_t& _memorySpec)
{
    m_memorySpec = _memorySpec;
    m_memorySpecHasBeenSet = true;
}

bool HostDetail::MemorySpecHasBeenSet() const
{
    return m_memorySpecHasBeenSet;
}

int64_t HostDetail::GetMemoryAssigned() const
{
    return m_memoryAssigned;
}

void HostDetail::SetMemoryAssigned(const int64_t& _memoryAssigned)
{
    m_memoryAssigned = _memoryAssigned;
    m_memoryAssignedHasBeenSet = true;
}

bool HostDetail::MemoryAssignedHasBeenSet() const
{
    return m_memoryAssignedHasBeenSet;
}

int64_t HostDetail::GetMemoryAssignable() const
{
    return m_memoryAssignable;
}

void HostDetail::SetMemoryAssignable(const int64_t& _memoryAssignable)
{
    m_memoryAssignable = _memoryAssignable;
    m_memoryAssignableHasBeenSet = true;
}

bool HostDetail::MemoryAssignableHasBeenSet() const
{
    return m_memoryAssignableHasBeenSet;
}

int64_t HostDetail::GetDiskSpec() const
{
    return m_diskSpec;
}

void HostDetail::SetDiskSpec(const int64_t& _diskSpec)
{
    m_diskSpec = _diskSpec;
    m_diskSpecHasBeenSet = true;
}

bool HostDetail::DiskSpecHasBeenSet() const
{
    return m_diskSpecHasBeenSet;
}

int64_t HostDetail::GetDiskAssigned() const
{
    return m_diskAssigned;
}

void HostDetail::SetDiskAssigned(const int64_t& _diskAssigned)
{
    m_diskAssigned = _diskAssigned;
    m_diskAssignedHasBeenSet = true;
}

bool HostDetail::DiskAssignedHasBeenSet() const
{
    return m_diskAssignedHasBeenSet;
}

int64_t HostDetail::GetDiskAssignable() const
{
    return m_diskAssignable;
}

void HostDetail::SetDiskAssignable(const int64_t& _diskAssignable)
{
    m_diskAssignable = _diskAssignable;
    m_diskAssignableHasBeenSet = true;
}

bool HostDetail::DiskAssignableHasBeenSet() const
{
    return m_diskAssignableHasBeenSet;
}

double HostDetail::GetCpuRatio() const
{
    return m_cpuRatio;
}

void HostDetail::SetCpuRatio(const double& _cpuRatio)
{
    m_cpuRatio = _cpuRatio;
    m_cpuRatioHasBeenSet = true;
}

bool HostDetail::CpuRatioHasBeenSet() const
{
    return m_cpuRatioHasBeenSet;
}

double HostDetail::GetMemoryRatio() const
{
    return m_memoryRatio;
}

void HostDetail::SetMemoryRatio(const double& _memoryRatio)
{
    m_memoryRatio = _memoryRatio;
    m_memoryRatioHasBeenSet = true;
}

bool HostDetail::MemoryRatioHasBeenSet() const
{
    return m_memoryRatioHasBeenSet;
}

double HostDetail::GetDiskRatio() const
{
    return m_diskRatio;
}

void HostDetail::SetDiskRatio(const double& _diskRatio)
{
    m_diskRatio = _diskRatio;
    m_diskRatioHasBeenSet = true;
}

bool HostDetail::DiskRatioHasBeenSet() const
{
    return m_diskRatioHasBeenSet;
}

string HostDetail::GetMachineName() const
{
    return m_machineName;
}

void HostDetail::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool HostDetail::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string HostDetail::GetMachineType() const
{
    return m_machineType;
}

void HostDetail::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool HostDetail::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string HostDetail::GetPidTag() const
{
    return m_pidTag;
}

void HostDetail::SetPidTag(const string& _pidTag)
{
    m_pidTag = _pidTag;
    m_pidTagHasBeenSet = true;
}

bool HostDetail::PidTagHasBeenSet() const
{
    return m_pidTagHasBeenSet;
}

int64_t HostDetail::GetPid() const
{
    return m_pid;
}

void HostDetail::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool HostDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string HostDetail::GetInstanceId() const
{
    return m_instanceId;
}

void HostDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool HostDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

