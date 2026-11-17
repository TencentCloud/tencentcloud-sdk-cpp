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

#include <tencentcloud/ags/v20250920/model/GPUResourceGroupSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

GPUResourceGroupSpec::GPUResourceGroupSpec() :
    m_gPUTypeHasBeenSet(false),
    m_gPUTypeAliasHasBeenSet(false),
    m_gPUMemoryGiBHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gPUNumHasBeenSet(false)
{
}

CoreInternalOutcome GPUResourceGroupSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GPUType") && !value["GPUType"].IsNull())
    {
        if (!value["GPUType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupSpec.GPUType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUType = string(value["GPUType"].GetString());
        m_gPUTypeHasBeenSet = true;
    }

    if (value.HasMember("GPUTypeAlias") && !value["GPUTypeAlias"].IsNull())
    {
        if (!value["GPUTypeAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupSpec.GPUTypeAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUTypeAlias = string(value["GPUTypeAlias"].GetString());
        m_gPUTypeAliasHasBeenSet = true;
    }

    if (value.HasMember("GPUMemoryGiB") && !value["GPUMemoryGiB"].IsNull())
    {
        if (!value["GPUMemoryGiB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupSpec.GPUMemoryGiB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gPUMemoryGiB = value["GPUMemoryGiB"].GetUint64();
        m_gPUMemoryGiBHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupSpec.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupSpec.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("GPUNum") && !value["GPUNum"].IsNull())
    {
        if (!value["GPUNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GPUResourceGroupSpec.GPUNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gPUNum = value["GPUNum"].GetUint64();
        m_gPUNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GPUResourceGroupSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUTypeAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUTypeAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUTypeAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUMemoryGiBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUMemoryGiB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPUMemoryGiB, allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_gPUNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gPUNum, allocator);
    }

}


string GPUResourceGroupSpec::GetGPUType() const
{
    return m_gPUType;
}

void GPUResourceGroupSpec::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool GPUResourceGroupSpec::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

string GPUResourceGroupSpec::GetGPUTypeAlias() const
{
    return m_gPUTypeAlias;
}

void GPUResourceGroupSpec::SetGPUTypeAlias(const string& _gPUTypeAlias)
{
    m_gPUTypeAlias = _gPUTypeAlias;
    m_gPUTypeAliasHasBeenSet = true;
}

bool GPUResourceGroupSpec::GPUTypeAliasHasBeenSet() const
{
    return m_gPUTypeAliasHasBeenSet;
}

uint64_t GPUResourceGroupSpec::GetGPUMemoryGiB() const
{
    return m_gPUMemoryGiB;
}

void GPUResourceGroupSpec::SetGPUMemoryGiB(const uint64_t& _gPUMemoryGiB)
{
    m_gPUMemoryGiB = _gPUMemoryGiB;
    m_gPUMemoryGiBHasBeenSet = true;
}

bool GPUResourceGroupSpec::GPUMemoryGiBHasBeenSet() const
{
    return m_gPUMemoryGiBHasBeenSet;
}

uint64_t GPUResourceGroupSpec::GetCPU() const
{
    return m_cPU;
}

void GPUResourceGroupSpec::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool GPUResourceGroupSpec::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t GPUResourceGroupSpec::GetMemory() const
{
    return m_memory;
}

void GPUResourceGroupSpec::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool GPUResourceGroupSpec::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t GPUResourceGroupSpec::GetGPUNum() const
{
    return m_gPUNum;
}

void GPUResourceGroupSpec::SetGPUNum(const uint64_t& _gPUNum)
{
    m_gPUNum = _gPUNum;
    m_gPUNumHasBeenSet = true;
}

bool GPUResourceGroupSpec::GPUNumHasBeenSet() const
{
    return m_gPUNumHasBeenSet;
}

