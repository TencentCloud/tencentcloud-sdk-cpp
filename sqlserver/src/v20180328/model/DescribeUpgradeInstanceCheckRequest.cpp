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

#include <tencentcloud/sqlserver/v20180328/model/DescribeUpgradeInstanceCheckRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeUpgradeInstanceCheckRequest::DescribeUpgradeInstanceCheckRequest() :
    m_instanceIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_hATypeHasBeenSet(false),
    m_multiZonesHasBeenSet(false),
    m_drZonesHasBeenSet(false)
{
}

string DescribeUpgradeInstanceCheckRequest::ToJsonString() const
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

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storage, allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_hATypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HAType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hAType.c_str(), allocator).Move(), allocator);
    }

    if (m_multiZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_multiZones.c_str(), allocator).Move(), allocator);
    }

    if (m_drZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drZones.begin(); itr != m_drZones.end(); ++itr, ++i)
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


string DescribeUpgradeInstanceCheckRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeUpgradeInstanceCheckRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeUpgradeInstanceCheckRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeUpgradeInstanceCheckRequest::GetCpu() const
{
    return m_cpu;
}

void DescribeUpgradeInstanceCheckRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DescribeUpgradeInstanceCheckRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DescribeUpgradeInstanceCheckRequest::GetMemory() const
{
    return m_memory;
}

void DescribeUpgradeInstanceCheckRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DescribeUpgradeInstanceCheckRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DescribeUpgradeInstanceCheckRequest::GetStorage() const
{
    return m_storage;
}

void DescribeUpgradeInstanceCheckRequest::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DescribeUpgradeInstanceCheckRequest::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DescribeUpgradeInstanceCheckRequest::GetDBVersion() const
{
    return m_dBVersion;
}

void DescribeUpgradeInstanceCheckRequest::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool DescribeUpgradeInstanceCheckRequest::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string DescribeUpgradeInstanceCheckRequest::GetHAType() const
{
    return m_hAType;
}

void DescribeUpgradeInstanceCheckRequest::SetHAType(const string& _hAType)
{
    m_hAType = _hAType;
    m_hATypeHasBeenSet = true;
}

bool DescribeUpgradeInstanceCheckRequest::HATypeHasBeenSet() const
{
    return m_hATypeHasBeenSet;
}

string DescribeUpgradeInstanceCheckRequest::GetMultiZones() const
{
    return m_multiZones;
}

void DescribeUpgradeInstanceCheckRequest::SetMultiZones(const string& _multiZones)
{
    m_multiZones = _multiZones;
    m_multiZonesHasBeenSet = true;
}

bool DescribeUpgradeInstanceCheckRequest::MultiZonesHasBeenSet() const
{
    return m_multiZonesHasBeenSet;
}

vector<DrZoneInfo> DescribeUpgradeInstanceCheckRequest::GetDrZones() const
{
    return m_drZones;
}

void DescribeUpgradeInstanceCheckRequest::SetDrZones(const vector<DrZoneInfo>& _drZones)
{
    m_drZones = _drZones;
    m_drZonesHasBeenSet = true;
}

bool DescribeUpgradeInstanceCheckRequest::DrZonesHasBeenSet() const
{
    return m_drZonesHasBeenSet;
}


