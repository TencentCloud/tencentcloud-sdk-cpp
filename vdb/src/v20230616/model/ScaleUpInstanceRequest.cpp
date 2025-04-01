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

#include <tencentcloud/vdb/v20230616/model/ScaleUpInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vdb::V20230616::Model;
using namespace std;

ScaleUpInstanceRequest::ScaleUpInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_runNowHasBeenSet(false)
{
}

string ScaleUpInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_runNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleUpInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleUpInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleUpInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

double ScaleUpInstanceRequest::GetCpu() const
{
    return m_cpu;
}

void ScaleUpInstanceRequest::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ScaleUpInstanceRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double ScaleUpInstanceRequest::GetMemory() const
{
    return m_memory;
}

void ScaleUpInstanceRequest::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ScaleUpInstanceRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ScaleUpInstanceRequest::GetStorageSize() const
{
    return m_storageSize;
}

void ScaleUpInstanceRequest::SetStorageSize(const uint64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool ScaleUpInstanceRequest::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

bool ScaleUpInstanceRequest::GetRunNow() const
{
    return m_runNow;
}

void ScaleUpInstanceRequest::SetRunNow(const bool& _runNow)
{
    m_runNow = _runNow;
    m_runNowHasBeenSet = true;
}

bool ScaleUpInstanceRequest::RunNowHasBeenSet() const
{
    return m_runNowHasBeenSet;
}


