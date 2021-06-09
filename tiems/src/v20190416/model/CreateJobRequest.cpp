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

#include <tencentcloud/tiems/v20190416/model/CreateJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

CreateJobRequest::CreateJobRequest() :
    m_nameHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_predictInputHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_workerCountHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_gpuMemoryHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_quantizationInputHasBeenSet(false),
    m_logTopicIdHasBeenSet(false)
{
}

string CreateJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_predictInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredictInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_predictInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_workerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workerCount, allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gpu, allocator);
    }

    if (m_gpuMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gpuMemory, allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_quantizationInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuantizationInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quantizationInput.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJobRequest::GetName() const
{
    return m_name;
}

void CreateJobRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateJobRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateJobRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void CreateJobRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool CreateJobRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

uint64_t CreateJobRequest::GetCpu() const
{
    return m_cpu;
}

void CreateJobRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateJobRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t CreateJobRequest::GetMemory() const
{
    return m_memory;
}

void CreateJobRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateJobRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string CreateJobRequest::GetCluster() const
{
    return m_cluster;
}

void CreateJobRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool CreateJobRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

PredictInput CreateJobRequest::GetPredictInput() const
{
    return m_predictInput;
}

void CreateJobRequest::SetPredictInput(const PredictInput& _predictInput)
{
    m_predictInput = _predictInput;
    m_predictInputHasBeenSet = true;
}

bool CreateJobRequest::PredictInputHasBeenSet() const
{
    return m_predictInputHasBeenSet;
}

string CreateJobRequest::GetDescription() const
{
    return m_description;
}

void CreateJobRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateJobRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateJobRequest::GetWorkerCount() const
{
    return m_workerCount;
}

void CreateJobRequest::SetWorkerCount(const uint64_t& _workerCount)
{
    m_workerCount = _workerCount;
    m_workerCountHasBeenSet = true;
}

bool CreateJobRequest::WorkerCountHasBeenSet() const
{
    return m_workerCountHasBeenSet;
}

string CreateJobRequest::GetConfigId() const
{
    return m_configId;
}

void CreateJobRequest::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool CreateJobRequest::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

uint64_t CreateJobRequest::GetGpu() const
{
    return m_gpu;
}

void CreateJobRequest::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool CreateJobRequest::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

uint64_t CreateJobRequest::GetGpuMemory() const
{
    return m_gpuMemory;
}

void CreateJobRequest::SetGpuMemory(const uint64_t& _gpuMemory)
{
    m_gpuMemory = _gpuMemory;
    m_gpuMemoryHasBeenSet = true;
}

bool CreateJobRequest::GpuMemoryHasBeenSet() const
{
    return m_gpuMemoryHasBeenSet;
}

string CreateJobRequest::GetGpuType() const
{
    return m_gpuType;
}

void CreateJobRequest::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool CreateJobRequest::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

QuantizationInput CreateJobRequest::GetQuantizationInput() const
{
    return m_quantizationInput;
}

void CreateJobRequest::SetQuantizationInput(const QuantizationInput& _quantizationInput)
{
    m_quantizationInput = _quantizationInput;
    m_quantizationInputHasBeenSet = true;
}

bool CreateJobRequest::QuantizationInputHasBeenSet() const
{
    return m_quantizationInputHasBeenSet;
}

string CreateJobRequest::GetLogTopicId() const
{
    return m_logTopicId;
}

void CreateJobRequest::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool CreateJobRequest::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}


