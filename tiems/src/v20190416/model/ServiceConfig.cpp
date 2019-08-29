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

#include <tencentcloud/tiems/v20190416/model/ServiceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

ServiceConfig::ServiceConfig() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_modelUriHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_tflopUnitsHasBeenSet(false),
    m_gpuMemoryHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome ServiceConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ModelUri") && !value["ModelUri"].IsNull())
    {
        if (!value["ModelUri"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.ModelUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUri = string(value["ModelUri"].GetString());
        m_modelUriHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("TflopUnits") && !value["TflopUnits"].IsNull())
    {
        if (!value["TflopUnits"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.TflopUnits` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tflopUnits = value["TflopUnits"].GetUint64();
        m_tflopUnitsHasBeenSet = true;
    }

    if (value.HasMember("GpuMemory") && !value["GpuMemory"].IsNull())
    {
        if (!value["GpuMemory"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.GpuMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemory = value["GpuMemory"].GetUint64();
        m_gpuMemoryHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceConfig.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUriHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModelUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modelUri.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_tflopUnitsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TflopUnits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tflopUnits, allocator);
    }

    if (m_gpuMemoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GpuMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemory, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ServiceConfig::GetId() const
{
    return m_id;
}

void ServiceConfig::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ServiceConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ServiceConfig::GetName() const
{
    return m_name;
}

void ServiceConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ServiceConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ServiceConfig::GetModelUri() const
{
    return m_modelUri;
}

void ServiceConfig::SetModelUri(const string& _modelUri)
{
    m_modelUri = _modelUri;
    m_modelUriHasBeenSet = true;
}

bool ServiceConfig::ModelUriHasBeenSet() const
{
    return m_modelUriHasBeenSet;
}

uint64_t ServiceConfig::GetCpu() const
{
    return m_cpu;
}

void ServiceConfig::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ServiceConfig::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ServiceConfig::GetMemory() const
{
    return m_memory;
}

void ServiceConfig::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ServiceConfig::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ServiceConfig::GetTflopUnits() const
{
    return m_tflopUnits;
}

void ServiceConfig::SetTflopUnits(const uint64_t& _tflopUnits)
{
    m_tflopUnits = _tflopUnits;
    m_tflopUnitsHasBeenSet = true;
}

bool ServiceConfig::TflopUnitsHasBeenSet() const
{
    return m_tflopUnitsHasBeenSet;
}

uint64_t ServiceConfig::GetGpuMemory() const
{
    return m_gpuMemory;
}

void ServiceConfig::SetGpuMemory(const uint64_t& _gpuMemory)
{
    m_gpuMemory = _gpuMemory;
    m_gpuMemoryHasBeenSet = true;
}

bool ServiceConfig::GpuMemoryHasBeenSet() const
{
    return m_gpuMemoryHasBeenSet;
}

string ServiceConfig::GetCreateTime() const
{
    return m_createTime;
}

void ServiceConfig::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServiceConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ServiceConfig::GetUpdateTime() const
{
    return m_updateTime;
}

void ServiceConfig::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ServiceConfig::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ServiceConfig::GetRuntime() const
{
    return m_runtime;
}

void ServiceConfig::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool ServiceConfig::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string ServiceConfig::GetVersion() const
{
    return m_version;
}

void ServiceConfig::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ServiceConfig::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

