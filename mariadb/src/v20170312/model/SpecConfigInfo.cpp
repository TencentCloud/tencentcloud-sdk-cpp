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

#include <tencentcloud/mariadb/v20170312/model/SpecConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

SpecConfigInfo::SpecConfigInfo() :
    m_machineHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_minStorageHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_suitInfoHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_cpuHasBeenSet(false)
{
}

CoreInternalOutcome SpecConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Machine") && !value["Machine"].IsNull())
    {
        if (!value["Machine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.Machine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machine = string(value["Machine"].GetString());
        m_machineHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("MinStorage") && !value["MinStorage"].IsNull())
    {
        if (!value["MinStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.MinStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorage = value["MinStorage"].GetInt64();
        m_minStorageHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.MaxStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetInt64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("SuitInfo") && !value["SuitInfo"].IsNull())
    {
        if (!value["SuitInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.SuitInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suitInfo = string(value["SuitInfo"].GetString());
        m_suitInfoHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.Qps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetInt64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecConfigInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
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

    if (m_suitInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuitInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suitInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

}


string SpecConfigInfo::GetMachine() const
{
    return m_machine;
}

void SpecConfigInfo::SetMachine(const string& _machine)
{
    m_machine = _machine;
    m_machineHasBeenSet = true;
}

bool SpecConfigInfo::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

int64_t SpecConfigInfo::GetMemory() const
{
    return m_memory;
}

void SpecConfigInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool SpecConfigInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t SpecConfigInfo::GetMinStorage() const
{
    return m_minStorage;
}

void SpecConfigInfo::SetMinStorage(const int64_t& _minStorage)
{
    m_minStorage = _minStorage;
    m_minStorageHasBeenSet = true;
}

bool SpecConfigInfo::MinStorageHasBeenSet() const
{
    return m_minStorageHasBeenSet;
}

int64_t SpecConfigInfo::GetMaxStorage() const
{
    return m_maxStorage;
}

void SpecConfigInfo::SetMaxStorage(const int64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool SpecConfigInfo::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

string SpecConfigInfo::GetSuitInfo() const
{
    return m_suitInfo;
}

void SpecConfigInfo::SetSuitInfo(const string& _suitInfo)
{
    m_suitInfo = _suitInfo;
    m_suitInfoHasBeenSet = true;
}

bool SpecConfigInfo::SuitInfoHasBeenSet() const
{
    return m_suitInfoHasBeenSet;
}

int64_t SpecConfigInfo::GetQps() const
{
    return m_qps;
}

void SpecConfigInfo::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool SpecConfigInfo::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

int64_t SpecConfigInfo::GetPid() const
{
    return m_pid;
}

void SpecConfigInfo::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool SpecConfigInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

int64_t SpecConfigInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void SpecConfigInfo::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool SpecConfigInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t SpecConfigInfo::GetCpu() const
{
    return m_cpu;
}

void SpecConfigInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool SpecConfigInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

