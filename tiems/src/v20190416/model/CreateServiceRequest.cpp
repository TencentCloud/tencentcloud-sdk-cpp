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

#include <tencentcloud/tiems/v20190416/model/CreateServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

CreateServiceRequest::CreateServiceRequest() :
    m_scalerHasBeenSet(false),
    m_serviceConfigIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_scaleModeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_gpuMemoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_logTopicIdHasBeenSet(false)
{
}

string CreateServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scaler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scaler.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceConfigIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfigId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceConfigId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleMode.c_str(), allocator).Move(), allocator);
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

    if (m_authenticationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Authentication";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authentication.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
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


Scaler CreateServiceRequest::GetScaler() const
{
    return m_scaler;
}

void CreateServiceRequest::SetScaler(const Scaler& _scaler)
{
    m_scaler = _scaler;
    m_scalerHasBeenSet = true;
}

bool CreateServiceRequest::ScalerHasBeenSet() const
{
    return m_scalerHasBeenSet;
}

string CreateServiceRequest::GetServiceConfigId() const
{
    return m_serviceConfigId;
}

void CreateServiceRequest::SetServiceConfigId(const string& _serviceConfigId)
{
    m_serviceConfigId = _serviceConfigId;
    m_serviceConfigIdHasBeenSet = true;
}

bool CreateServiceRequest::ServiceConfigIdHasBeenSet() const
{
    return m_serviceConfigIdHasBeenSet;
}

string CreateServiceRequest::GetName() const
{
    return m_name;
}

void CreateServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateServiceRequest::GetScaleMode() const
{
    return m_scaleMode;
}

void CreateServiceRequest::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool CreateServiceRequest::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

string CreateServiceRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void CreateServiceRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool CreateServiceRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

uint64_t CreateServiceRequest::GetCpu() const
{
    return m_cpu;
}

void CreateServiceRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateServiceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t CreateServiceRequest::GetMemory() const
{
    return m_memory;
}

void CreateServiceRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CreateServiceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string CreateServiceRequest::GetCluster() const
{
    return m_cluster;
}

void CreateServiceRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool CreateServiceRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string CreateServiceRequest::GetAuthentication() const
{
    return m_authentication;
}

void CreateServiceRequest::SetAuthentication(const string& _authentication)
{
    m_authentication = _authentication;
    m_authenticationHasBeenSet = true;
}

bool CreateServiceRequest::AuthenticationHasBeenSet() const
{
    return m_authenticationHasBeenSet;
}

uint64_t CreateServiceRequest::GetGpu() const
{
    return m_gpu;
}

void CreateServiceRequest::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool CreateServiceRequest::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

uint64_t CreateServiceRequest::GetGpuMemory() const
{
    return m_gpuMemory;
}

void CreateServiceRequest::SetGpuMemory(const uint64_t& _gpuMemory)
{
    m_gpuMemory = _gpuMemory;
    m_gpuMemoryHasBeenSet = true;
}

bool CreateServiceRequest::GpuMemoryHasBeenSet() const
{
    return m_gpuMemoryHasBeenSet;
}

string CreateServiceRequest::GetDescription() const
{
    return m_description;
}

void CreateServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateServiceRequest::GetGpuType() const
{
    return m_gpuType;
}

void CreateServiceRequest::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool CreateServiceRequest::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

string CreateServiceRequest::GetLogTopicId() const
{
    return m_logTopicId;
}

void CreateServiceRequest::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool CreateServiceRequest::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}


