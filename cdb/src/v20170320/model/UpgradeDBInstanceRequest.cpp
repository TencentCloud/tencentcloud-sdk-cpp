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

#include <tencentcloud/cdb/v20170320/model/UpgradeDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

UpgradeDBInstanceRequest::UpgradeDBInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_protectModeHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_slaveZoneHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_waitSwitchHasBeenSet(false),
    m_backupZoneHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_fastUpgradeHasBeenSet(false),
    m_maxDelayTimeHasBeenSet(false),
    m_crossClusterHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_roTransTypeHasBeenSet(false),
    m_clusterTopologyHasBeenSet(false),
    m_checkFastUpgradeRebootHasBeenSet(false),
    m_dataCheckSensitiveHasBeenSet(false)
{
}

string UpgradeDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_protectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_slaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_waitSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitSwitch, allocator);
    }

    if (m_backupZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupZone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_fastUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FastUpgrade";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fastUpgrade, allocator);
    }

    if (m_maxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDelayTime, allocator);
    }

    if (m_crossClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crossCluster, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_roTransTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoTransType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roTransType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTopologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTopology";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterTopology.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_checkFastUpgradeRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckFastUpgradeReboot";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkFastUpgradeReboot, allocator);
    }

    if (m_dataCheckSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataCheckSensitive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataCheckSensitive.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDBInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeDBInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetMemory() const
{
    return m_memory;
}

void UpgradeDBInstanceRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetVolume() const
{
    return m_volume;
}

void UpgradeDBInstanceRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetProtectMode() const
{
    return m_protectMode;
}

void UpgradeDBInstanceRequest::SetProtectMode(const int64_t& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetDeployMode() const
{
    return m_deployMode;
}

void UpgradeDBInstanceRequest::SetDeployMode(const int64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

string UpgradeDBInstanceRequest::GetSlaveZone() const
{
    return m_slaveZone;
}

void UpgradeDBInstanceRequest::SetSlaveZone(const string& _slaveZone)
{
    m_slaveZone = _slaveZone;
    m_slaveZoneHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::SlaveZoneHasBeenSet() const
{
    return m_slaveZoneHasBeenSet;
}

string UpgradeDBInstanceRequest::GetEngineVersion() const
{
    return m_engineVersion;
}

void UpgradeDBInstanceRequest::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetWaitSwitch() const
{
    return m_waitSwitch;
}

void UpgradeDBInstanceRequest::SetWaitSwitch(const int64_t& _waitSwitch)
{
    m_waitSwitch = _waitSwitch;
    m_waitSwitchHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::WaitSwitchHasBeenSet() const
{
    return m_waitSwitchHasBeenSet;
}

string UpgradeDBInstanceRequest::GetBackupZone() const
{
    return m_backupZone;
}

void UpgradeDBInstanceRequest::SetBackupZone(const string& _backupZone)
{
    m_backupZone = _backupZone;
    m_backupZoneHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::BackupZoneHasBeenSet() const
{
    return m_backupZoneHasBeenSet;
}

string UpgradeDBInstanceRequest::GetInstanceRole() const
{
    return m_instanceRole;
}

void UpgradeDBInstanceRequest::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string UpgradeDBInstanceRequest::GetDeviceType() const
{
    return m_deviceType;
}

void UpgradeDBInstanceRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void UpgradeDBInstanceRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetFastUpgrade() const
{
    return m_fastUpgrade;
}

void UpgradeDBInstanceRequest::SetFastUpgrade(const int64_t& _fastUpgrade)
{
    m_fastUpgrade = _fastUpgrade;
    m_fastUpgradeHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::FastUpgradeHasBeenSet() const
{
    return m_fastUpgradeHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetMaxDelayTime() const
{
    return m_maxDelayTime;
}

void UpgradeDBInstanceRequest::SetMaxDelayTime(const int64_t& _maxDelayTime)
{
    m_maxDelayTime = _maxDelayTime;
    m_maxDelayTimeHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::MaxDelayTimeHasBeenSet() const
{
    return m_maxDelayTimeHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetCrossCluster() const
{
    return m_crossCluster;
}

void UpgradeDBInstanceRequest::SetCrossCluster(const int64_t& _crossCluster)
{
    m_crossCluster = _crossCluster;
    m_crossClusterHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::CrossClusterHasBeenSet() const
{
    return m_crossClusterHasBeenSet;
}

string UpgradeDBInstanceRequest::GetZoneId() const
{
    return m_zoneId;
}

void UpgradeDBInstanceRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string UpgradeDBInstanceRequest::GetRoTransType() const
{
    return m_roTransType;
}

void UpgradeDBInstanceRequest::SetRoTransType(const string& _roTransType)
{
    m_roTransType = _roTransType;
    m_roTransTypeHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::RoTransTypeHasBeenSet() const
{
    return m_roTransTypeHasBeenSet;
}

ClusterTopology UpgradeDBInstanceRequest::GetClusterTopology() const
{
    return m_clusterTopology;
}

void UpgradeDBInstanceRequest::SetClusterTopology(const ClusterTopology& _clusterTopology)
{
    m_clusterTopology = _clusterTopology;
    m_clusterTopologyHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::ClusterTopologyHasBeenSet() const
{
    return m_clusterTopologyHasBeenSet;
}

int64_t UpgradeDBInstanceRequest::GetCheckFastUpgradeReboot() const
{
    return m_checkFastUpgradeReboot;
}

void UpgradeDBInstanceRequest::SetCheckFastUpgradeReboot(const int64_t& _checkFastUpgradeReboot)
{
    m_checkFastUpgradeReboot = _checkFastUpgradeReboot;
    m_checkFastUpgradeRebootHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::CheckFastUpgradeRebootHasBeenSet() const
{
    return m_checkFastUpgradeRebootHasBeenSet;
}

string UpgradeDBInstanceRequest::GetDataCheckSensitive() const
{
    return m_dataCheckSensitive;
}

void UpgradeDBInstanceRequest::SetDataCheckSensitive(const string& _dataCheckSensitive)
{
    m_dataCheckSensitive = _dataCheckSensitive;
    m_dataCheckSensitiveHasBeenSet = true;
}

bool UpgradeDBInstanceRequest::DataCheckSensitiveHasBeenSet() const
{
    return m_dataCheckSensitiveHasBeenSet;
}


