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

#include <tencentcloud/cynosdb/v20190107/model/InquirePriceModifyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InquirePriceModifyRequest::InquirePriceModifyRequest() :
    m_clusterIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_ccuHasBeenSet(false)
{
}

string InquirePriceModifyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_ccuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ccu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ccu, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquirePriceModifyRequest::GetClusterId() const
{
    return m_clusterId;
}

void InquirePriceModifyRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool InquirePriceModifyRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t InquirePriceModifyRequest::GetCpu() const
{
    return m_cpu;
}

void InquirePriceModifyRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InquirePriceModifyRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t InquirePriceModifyRequest::GetMemory() const
{
    return m_memory;
}

void InquirePriceModifyRequest::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InquirePriceModifyRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t InquirePriceModifyRequest::GetStorageLimit() const
{
    return m_storageLimit;
}

void InquirePriceModifyRequest::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool InquirePriceModifyRequest::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

string InquirePriceModifyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InquirePriceModifyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InquirePriceModifyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InquirePriceModifyRequest::GetDeviceType() const
{
    return m_deviceType;
}

void InquirePriceModifyRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool InquirePriceModifyRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

double InquirePriceModifyRequest::GetCcu() const
{
    return m_ccu;
}

void InquirePriceModifyRequest::SetCcu(const double& _ccu)
{
    m_ccu = _ccu;
    m_ccuHasBeenSet = true;
}

bool InquirePriceModifyRequest::CcuHasBeenSet() const
{
    return m_ccuHasBeenSet;
}


