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

#include <tencentcloud/cynosdb/v20190107/model/ProxySpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxySpec::ProxySpec() :
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false)
{
}

CoreInternalOutcome ProxySpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxySpec.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxySpec.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxySpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t ProxySpec::GetCpu() const
{
    return m_cpu;
}

void ProxySpec::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ProxySpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ProxySpec::GetMem() const
{
    return m_mem;
}

void ProxySpec::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ProxySpec::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

