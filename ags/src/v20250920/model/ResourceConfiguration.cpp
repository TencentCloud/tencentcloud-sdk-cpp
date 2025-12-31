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

#include <tencentcloud/ags/v20250920/model/ResourceConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

ResourceConfiguration::ResourceConfiguration() :
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false)
{
}

CoreInternalOutcome ResourceConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfiguration.CPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = string(value["CPU"].GetString());
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConfiguration.Memory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memory = string(value["Memory"].GetString());
        m_memoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPU.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memory.c_str(), allocator).Move(), allocator);
    }

}


string ResourceConfiguration::GetCPU() const
{
    return m_cPU;
}

void ResourceConfiguration::SetCPU(const string& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool ResourceConfiguration::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

string ResourceConfiguration::GetMemory() const
{
    return m_memory;
}

void ResourceConfiguration::SetMemory(const string& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ResourceConfiguration::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

