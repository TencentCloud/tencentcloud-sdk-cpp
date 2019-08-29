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

#include <tencentcloud/tiems/v20190416/model/CreateServiceConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

CreateServiceConfigRequest::CreateServiceConfigRequest() :
    m_nameHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_modelUriHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_tflopUnitsHasBeenSet(false),
    m_gpuMemoryHasBeenSet(false)
{
}

string CreateServiceConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUriHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModelUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_modelUri.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_tflopUnitsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TflopUnits";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tflopUnits, allocator);
    }

    if (m_gpuMemoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GpuMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gpuMemory, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateServiceConfigRequest::GetName() const
{
    return m_name;
}

void CreateServiceConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateServiceConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateServiceConfigRequest::GetRuntime() const
{
    return m_runtime;
}

void CreateServiceConfigRequest::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool CreateServiceConfigRequest::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string CreateServiceConfigRequest::GetModelUri() const
{
    return m_modelUri;
}

void CreateServiceConfigRequest::SetModelUri(const string& _modelUri)
{
    m_modelUri = _modelUri;
    m_modelUriHasBeenSet = true;
}

bool CreateServiceConfigRequest::ModelUriHasBeenSet() const
{
    return m_modelUriHasBeenSet;
}

uint64_t CreateServiceConfigRequest::GetCpu() const
{
    return m_cpu;
}

void CreateServiceConfigRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateServiceConfigRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t CreateServiceConfigRequest::GetMemory() const
{
    return m_memory;
}

void CreateServiceConfigRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateServiceConfigRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t CreateServiceConfigRequest::GetTflopUnits() const
{
    return m_tflopUnits;
}

void CreateServiceConfigRequest::SetTflopUnits(const uint64_t& _tflopUnits)
{
    m_tflopUnits = _tflopUnits;
    m_tflopUnitsHasBeenSet = true;
}

bool CreateServiceConfigRequest::TflopUnitsHasBeenSet() const
{
    return m_tflopUnitsHasBeenSet;
}

uint64_t CreateServiceConfigRequest::GetGpuMemory() const
{
    return m_gpuMemory;
}

void CreateServiceConfigRequest::SetGpuMemory(const uint64_t& _gpuMemory)
{
    m_gpuMemory = _gpuMemory;
    m_gpuMemoryHasBeenSet = true;
}

bool CreateServiceConfigRequest::GpuMemoryHasBeenSet() const
{
    return m_gpuMemoryHasBeenSet;
}


