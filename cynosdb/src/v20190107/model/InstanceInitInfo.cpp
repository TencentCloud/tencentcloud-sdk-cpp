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

#include <tencentcloud/cynosdb/v20190107/model/InstanceInitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InstanceInitInfo::InstanceInitInfo() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_minRoCountHasBeenSet(false),
    m_maxRoCountHasBeenSet(false),
    m_minRoCpuHasBeenSet(false),
    m_maxRoCpuHasBeenSet(false),
    m_deviceTypeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("MinRoCount") && !value["MinRoCount"].IsNull())
    {
        if (!value["MinRoCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.MinRoCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minRoCount = value["MinRoCount"].GetInt64();
        m_minRoCountHasBeenSet = true;
    }

    if (value.HasMember("MaxRoCount") && !value["MaxRoCount"].IsNull())
    {
        if (!value["MaxRoCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.MaxRoCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRoCount = value["MaxRoCount"].GetInt64();
        m_maxRoCountHasBeenSet = true;
    }

    if (value.HasMember("MinRoCpu") && !value["MinRoCpu"].IsNull())
    {
        if (!value["MinRoCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.MinRoCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minRoCpu = value["MinRoCpu"].GetDouble();
        m_minRoCpuHasBeenSet = true;
    }

    if (value.HasMember("MaxRoCpu") && !value["MaxRoCpu"].IsNull())
    {
        if (!value["MaxRoCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.MaxRoCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxRoCpu = value["MaxRoCpu"].GetDouble();
        m_maxRoCpuHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInitInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_minRoCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRoCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRoCount, allocator);
    }

    if (m_maxRoCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRoCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRoCount, allocator);
    }

    if (m_minRoCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRoCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRoCpu, allocator);
    }

    if (m_maxRoCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRoCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRoCpu, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceInitInfo::GetCpu() const
{
    return m_cpu;
}

void InstanceInitInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceInitInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t InstanceInitInfo::GetMemory() const
{
    return m_memory;
}

void InstanceInitInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceInitInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string InstanceInitInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceInitInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceInitInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t InstanceInitInfo::GetInstanceCount() const
{
    return m_instanceCount;
}

void InstanceInitInfo::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool InstanceInitInfo::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t InstanceInitInfo::GetMinRoCount() const
{
    return m_minRoCount;
}

void InstanceInitInfo::SetMinRoCount(const int64_t& _minRoCount)
{
    m_minRoCount = _minRoCount;
    m_minRoCountHasBeenSet = true;
}

bool InstanceInitInfo::MinRoCountHasBeenSet() const
{
    return m_minRoCountHasBeenSet;
}

int64_t InstanceInitInfo::GetMaxRoCount() const
{
    return m_maxRoCount;
}

void InstanceInitInfo::SetMaxRoCount(const int64_t& _maxRoCount)
{
    m_maxRoCount = _maxRoCount;
    m_maxRoCountHasBeenSet = true;
}

bool InstanceInitInfo::MaxRoCountHasBeenSet() const
{
    return m_maxRoCountHasBeenSet;
}

double InstanceInitInfo::GetMinRoCpu() const
{
    return m_minRoCpu;
}

void InstanceInitInfo::SetMinRoCpu(const double& _minRoCpu)
{
    m_minRoCpu = _minRoCpu;
    m_minRoCpuHasBeenSet = true;
}

bool InstanceInitInfo::MinRoCpuHasBeenSet() const
{
    return m_minRoCpuHasBeenSet;
}

double InstanceInitInfo::GetMaxRoCpu() const
{
    return m_maxRoCpu;
}

void InstanceInitInfo::SetMaxRoCpu(const double& _maxRoCpu)
{
    m_maxRoCpu = _maxRoCpu;
    m_maxRoCpuHasBeenSet = true;
}

bool InstanceInitInfo::MaxRoCpuHasBeenSet() const
{
    return m_maxRoCpuHasBeenSet;
}

string InstanceInitInfo::GetDeviceType() const
{
    return m_deviceType;
}

void InstanceInitInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool InstanceInitInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

