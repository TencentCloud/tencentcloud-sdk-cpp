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

#include <tencentcloud/dlc/v20210125/model/EmrResourceUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

EmrResourceUsage::EmrResourceUsage() :
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false)
{
}

CoreInternalOutcome EmrResourceUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrResourceUsage.Cpu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = string(value["Cpu"].GetString());
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrResourceUsage.Mem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mem = string(value["Mem"].GetString());
        m_memHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmrResourceUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpu.c_str(), allocator).Move(), allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mem.c_str(), allocator).Move(), allocator);
    }

}


string EmrResourceUsage::GetCpu() const
{
    return m_cpu;
}

void EmrResourceUsage::SetCpu(const string& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool EmrResourceUsage::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string EmrResourceUsage::GetMem() const
{
    return m_mem;
}

void EmrResourceUsage::SetMem(const string& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool EmrResourceUsage::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

