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

#include <tencentcloud/oceanus/v20190422/model/SetatsCvmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

SetatsCvmInfo::SetatsCvmInfo() :
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_defaultParallelismHasBeenSet(false),
    m_diskHasBeenSet(false)
{
}

CoreInternalOutcome SetatsCvmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SetatsCvmInfo.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SetatsCvmInfo.Mem` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetDouble();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("DefaultParallelism") && !value["DefaultParallelism"].IsNull())
    {
        if (!value["DefaultParallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SetatsCvmInfo.DefaultParallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultParallelism = value["DefaultParallelism"].GetInt64();
        m_defaultParallelismHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SetatsCvmInfo.Disk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_disk.Deserialize(value["Disk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetatsCvmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_defaultParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultParallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultParallelism, allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_disk.ToJsonObject(value[key.c_str()], allocator);
    }

}


double SetatsCvmInfo::GetCpu() const
{
    return m_cpu;
}

void SetatsCvmInfo::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool SetatsCvmInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double SetatsCvmInfo::GetMem() const
{
    return m_mem;
}

void SetatsCvmInfo::SetMem(const double& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool SetatsCvmInfo::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

int64_t SetatsCvmInfo::GetDefaultParallelism() const
{
    return m_defaultParallelism;
}

void SetatsCvmInfo::SetDefaultParallelism(const int64_t& _defaultParallelism)
{
    m_defaultParallelism = _defaultParallelism;
    m_defaultParallelismHasBeenSet = true;
}

bool SetatsCvmInfo::DefaultParallelismHasBeenSet() const
{
    return m_defaultParallelismHasBeenSet;
}

SetatsDisk SetatsCvmInfo::GetDisk() const
{
    return m_disk;
}

void SetatsCvmInfo::SetDisk(const SetatsDisk& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool SetatsCvmInfo::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

