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

#include <tencentcloud/cdb/v20170320/model/InquiryPriceUpgradeInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

InquiryPriceUpgradeInstancesRequest::InquiryPriceUpgradeInstancesRequest() :
    m_instanceIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_protectModeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instanceNodesHasBeenSet(false)
{
}

string InquiryPriceUpgradeInstancesRequest::ToJsonString() const
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

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_protectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNodes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceUpgradeInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void InquiryPriceUpgradeInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InquiryPriceUpgradeInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t InquiryPriceUpgradeInstancesRequest::GetMemory() const
{
    return m_memory;
}

void InquiryPriceUpgradeInstancesRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InquiryPriceUpgradeInstancesRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t InquiryPriceUpgradeInstancesRequest::GetVolume() const
{
    return m_volume;
}

void InquiryPriceUpgradeInstancesRequest::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool InquiryPriceUpgradeInstancesRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

uint64_t InquiryPriceUpgradeInstancesRequest::GetCpu() const
{
    return m_cpu;
}

void InquiryPriceUpgradeInstancesRequest::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InquiryPriceUpgradeInstancesRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t InquiryPriceUpgradeInstancesRequest::GetProtectMode() const
{
    return m_protectMode;
}

void InquiryPriceUpgradeInstancesRequest::SetProtectMode(const uint64_t& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool InquiryPriceUpgradeInstancesRequest::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

string InquiryPriceUpgradeInstancesRequest::GetDeviceType() const
{
    return m_deviceType;
}

void InquiryPriceUpgradeInstancesRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool InquiryPriceUpgradeInstancesRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

int64_t InquiryPriceUpgradeInstancesRequest::GetInstanceNodes() const
{
    return m_instanceNodes;
}

void InquiryPriceUpgradeInstancesRequest::SetInstanceNodes(const int64_t& _instanceNodes)
{
    m_instanceNodes = _instanceNodes;
    m_instanceNodesHasBeenSet = true;
}

bool InquiryPriceUpgradeInstancesRequest::InstanceNodesHasBeenSet() const
{
    return m_instanceNodesHasBeenSet;
}


