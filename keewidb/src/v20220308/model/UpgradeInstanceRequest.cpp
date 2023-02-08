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

#include <tencentcloud/keewidb/v20220308/model/UpgradeInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Keewidb::V20220308::Model;
using namespace std;

UpgradeInstanceRequest::UpgradeInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_machineCpuHasBeenSet(false),
    m_machineMemoryHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_diskSizeHasBeenSet(false)
{
}

string UpgradeInstanceRequest::ToJsonString() const
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

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memSize, allocator);
    }

    if (m_machineCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_machineCpu, allocator);
    }

    if (m_machineMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineMemory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_machineMemory, allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetMemSize() const
{
    return m_memSize;
}

void UpgradeInstanceRequest::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool UpgradeInstanceRequest::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetMachineCpu() const
{
    return m_machineCpu;
}

void UpgradeInstanceRequest::SetMachineCpu(const int64_t& _machineCpu)
{
    m_machineCpu = _machineCpu;
    m_machineCpuHasBeenSet = true;
}

bool UpgradeInstanceRequest::MachineCpuHasBeenSet() const
{
    return m_machineCpuHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetMachineMemory() const
{
    return m_machineMemory;
}

void UpgradeInstanceRequest::SetMachineMemory(const int64_t& _machineMemory)
{
    m_machineMemory = _machineMemory;
    m_machineMemoryHasBeenSet = true;
}

bool UpgradeInstanceRequest::MachineMemoryHasBeenSet() const
{
    return m_machineMemoryHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetShardNum() const
{
    return m_shardNum;
}

void UpgradeInstanceRequest::SetShardNum(const int64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool UpgradeInstanceRequest::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

int64_t UpgradeInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void UpgradeInstanceRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool UpgradeInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}


