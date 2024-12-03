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

#include <tencentcloud/cdb/v20170320/model/CheckMigrateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CheckMigrateClusterRequest::CheckMigrateClusterRequest() :
    m_instanceIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_clusterTopologyHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_roInfoHasBeenSet(false)
{
}

string CheckMigrateClusterRequest::ToJsonString() const
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

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
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

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTopologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterTopology";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterTopology.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_roInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roInfo.begin(); itr != m_roInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckMigrateClusterRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CheckMigrateClusterRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CheckMigrateClusterRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CheckMigrateClusterRequest::GetCpu() const
{
    return m_cpu;
}

void CheckMigrateClusterRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CheckMigrateClusterRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CheckMigrateClusterRequest::GetMemory() const
{
    return m_memory;
}

void CheckMigrateClusterRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CheckMigrateClusterRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CheckMigrateClusterRequest::GetVolume() const
{
    return m_volume;
}

void CheckMigrateClusterRequest::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CheckMigrateClusterRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

string CheckMigrateClusterRequest::GetDiskType() const
{
    return m_diskType;
}

void CheckMigrateClusterRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CheckMigrateClusterRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

ClusterTopology CheckMigrateClusterRequest::GetClusterTopology() const
{
    return m_clusterTopology;
}

void CheckMigrateClusterRequest::SetClusterTopology(const ClusterTopology& _clusterTopology)
{
    m_clusterTopology = _clusterTopology;
    m_clusterTopologyHasBeenSet = true;
}

bool CheckMigrateClusterRequest::ClusterTopologyHasBeenSet() const
{
    return m_clusterTopologyHasBeenSet;
}

string CheckMigrateClusterRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CheckMigrateClusterRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CheckMigrateClusterRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

vector<MigrateClusterRoInfo> CheckMigrateClusterRequest::GetRoInfo() const
{
    return m_roInfo;
}

void CheckMigrateClusterRequest::SetRoInfo(const vector<MigrateClusterRoInfo>& _roInfo)
{
    m_roInfo = _roInfo;
    m_roInfoHasBeenSet = true;
}

bool CheckMigrateClusterRequest::RoInfoHasBeenSet() const
{
    return m_roInfoHasBeenSet;
}


