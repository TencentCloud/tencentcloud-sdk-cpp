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

#include <tencentcloud/tiems/v20190416/model/UpdateServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

UpdateServiceRequest::UpdateServiceRequest() :
    m_serviceIdHasBeenSet(false),
    m_scalerHasBeenSet(false),
    m_serviceConfigIdHasBeenSet(false),
    m_scaleModeHasBeenSet(false),
    m_serviceActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_logTopicIdHasBeenSet(false)
{
}

string UpdateServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_scaleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceAction.c_str(), allocator).Move(), allocator);
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

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gpu, allocator);
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


string UpdateServiceRequest::GetServiceId() const
{
    return m_serviceId;
}

void UpdateServiceRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool UpdateServiceRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

Scaler UpdateServiceRequest::GetScaler() const
{
    return m_scaler;
}

void UpdateServiceRequest::SetScaler(const Scaler& _scaler)
{
    m_scaler = _scaler;
    m_scalerHasBeenSet = true;
}

bool UpdateServiceRequest::ScalerHasBeenSet() const
{
    return m_scalerHasBeenSet;
}

string UpdateServiceRequest::GetServiceConfigId() const
{
    return m_serviceConfigId;
}

void UpdateServiceRequest::SetServiceConfigId(const string& _serviceConfigId)
{
    m_serviceConfigId = _serviceConfigId;
    m_serviceConfigIdHasBeenSet = true;
}

bool UpdateServiceRequest::ServiceConfigIdHasBeenSet() const
{
    return m_serviceConfigIdHasBeenSet;
}

string UpdateServiceRequest::GetScaleMode() const
{
    return m_scaleMode;
}

void UpdateServiceRequest::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool UpdateServiceRequest::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

string UpdateServiceRequest::GetServiceAction() const
{
    return m_serviceAction;
}

void UpdateServiceRequest::SetServiceAction(const string& _serviceAction)
{
    m_serviceAction = _serviceAction;
    m_serviceActionHasBeenSet = true;
}

bool UpdateServiceRequest::ServiceActionHasBeenSet() const
{
    return m_serviceActionHasBeenSet;
}

string UpdateServiceRequest::GetDescription() const
{
    return m_description;
}

void UpdateServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateServiceRequest::GetGpuType() const
{
    return m_gpuType;
}

void UpdateServiceRequest::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool UpdateServiceRequest::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

uint64_t UpdateServiceRequest::GetCpu() const
{
    return m_cpu;
}

void UpdateServiceRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool UpdateServiceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t UpdateServiceRequest::GetMemory() const
{
    return m_memory;
}

void UpdateServiceRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool UpdateServiceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t UpdateServiceRequest::GetGpu() const
{
    return m_gpu;
}

void UpdateServiceRequest::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool UpdateServiceRequest::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

string UpdateServiceRequest::GetLogTopicId() const
{
    return m_logTopicId;
}

void UpdateServiceRequest::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool UpdateServiceRequest::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}


