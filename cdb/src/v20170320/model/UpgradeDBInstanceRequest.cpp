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
using namespace rapidjson;
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
    m_instanceRoleHasBeenSet(false)
{
}

string UpgradeDBInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_protectModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_slaveZoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SlaveZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_slaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_waitSwitchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WaitSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitSwitch, allocator);
    }

    if (m_backupZoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BackupZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_backupZone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


