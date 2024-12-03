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

#include <tencentcloud/cdb/v20170320/model/MigrateClusterRoInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

MigrateClusterRoInfo::MigrateClusterRoInfo() :
    m_roInstanceIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_roGroupIdHasBeenSet(false),
    m_srcAlarmPolicyListHasBeenSet(false)
{
}

CoreInternalOutcome MigrateClusterRoInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoInstanceId") && !value["RoInstanceId"].IsNull())
    {
        if (!value["RoInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.RoInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roInstanceId = string(value["RoInstanceId"].GetString());
        m_roInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.Volume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetInt64();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("RoGroupId") && !value["RoGroupId"].IsNull())
    {
        if (!value["RoGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.RoGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roGroupId = string(value["RoGroupId"].GetString());
        m_roGroupIdHasBeenSet = true;
    }

    if (value.HasMember("SrcAlarmPolicyList") && !value["SrcAlarmPolicyList"].IsNull())
    {
        if (!value["SrcAlarmPolicyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateClusterRoInfo.SrcAlarmPolicyList` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcAlarmPolicyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_srcAlarmPolicyList.push_back((*itr).GetInt64());
        }
        m_srcAlarmPolicyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateClusterRoInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_roGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAlarmPolicyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAlarmPolicyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcAlarmPolicyList.begin(); itr != m_srcAlarmPolicyList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string MigrateClusterRoInfo::GetRoInstanceId() const
{
    return m_roInstanceId;
}

void MigrateClusterRoInfo::SetRoInstanceId(const string& _roInstanceId)
{
    m_roInstanceId = _roInstanceId;
    m_roInstanceIdHasBeenSet = true;
}

bool MigrateClusterRoInfo::RoInstanceIdHasBeenSet() const
{
    return m_roInstanceIdHasBeenSet;
}

int64_t MigrateClusterRoInfo::GetCpu() const
{
    return m_cpu;
}

void MigrateClusterRoInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool MigrateClusterRoInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t MigrateClusterRoInfo::GetMemory() const
{
    return m_memory;
}

void MigrateClusterRoInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool MigrateClusterRoInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t MigrateClusterRoInfo::GetVolume() const
{
    return m_volume;
}

void MigrateClusterRoInfo::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool MigrateClusterRoInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string MigrateClusterRoInfo::GetDiskType() const
{
    return m_diskType;
}

void MigrateClusterRoInfo::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool MigrateClusterRoInfo::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string MigrateClusterRoInfo::GetZone() const
{
    return m_zone;
}

void MigrateClusterRoInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool MigrateClusterRoInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string MigrateClusterRoInfo::GetDeviceType() const
{
    return m_deviceType;
}

void MigrateClusterRoInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool MigrateClusterRoInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string MigrateClusterRoInfo::GetRoGroupId() const
{
    return m_roGroupId;
}

void MigrateClusterRoInfo::SetRoGroupId(const string& _roGroupId)
{
    m_roGroupId = _roGroupId;
    m_roGroupIdHasBeenSet = true;
}

bool MigrateClusterRoInfo::RoGroupIdHasBeenSet() const
{
    return m_roGroupIdHasBeenSet;
}

vector<int64_t> MigrateClusterRoInfo::GetSrcAlarmPolicyList() const
{
    return m_srcAlarmPolicyList;
}

void MigrateClusterRoInfo::SetSrcAlarmPolicyList(const vector<int64_t>& _srcAlarmPolicyList)
{
    m_srcAlarmPolicyList = _srcAlarmPolicyList;
    m_srcAlarmPolicyListHasBeenSet = true;
}

bool MigrateClusterRoInfo::SrcAlarmPolicyListHasBeenSet() const
{
    return m_srcAlarmPolicyListHasBeenSet;
}

