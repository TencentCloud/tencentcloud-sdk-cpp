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

#include <tencentcloud/bm/v20180423/model/DescribeDeviceClassPartitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

DescribeDeviceClassPartitionRequest::DescribeDeviceClassPartitionRequest() :
    m_deviceClassCodeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_cpuIdHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_containRaidCardHasBeenSet(false),
    m_systemDiskTypeIdHasBeenSet(false),
    m_systemDiskCountHasBeenSet(false),
    m_dataDiskTypeIdHasBeenSet(false),
    m_dataDiskCountHasBeenSet(false)
{
}

string DescribeDeviceClassPartitionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceClassCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpuId, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memSize, allocator);
    }

    if (m_containRaidCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainRaidCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_containRaidCard, allocator);
    }

    if (m_systemDiskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_systemDiskTypeId, allocator);
    }

    if (m_systemDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_systemDiskCount, allocator);
    }

    if (m_dataDiskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataDiskTypeId, allocator);
    }

    if (m_dataDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataDiskCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceClassPartitionRequest::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void DescribeDeviceClassPartitionRequest::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

string DescribeDeviceClassPartitionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDeviceClassPartitionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeDeviceClassPartitionRequest::GetCpuId() const
{
    return m_cpuId;
}

void DescribeDeviceClassPartitionRequest::SetCpuId(const uint64_t& _cpuId)
{
    m_cpuId = _cpuId;
    m_cpuIdHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::CpuIdHasBeenSet() const
{
    return m_cpuIdHasBeenSet;
}

uint64_t DescribeDeviceClassPartitionRequest::GetMemSize() const
{
    return m_memSize;
}

void DescribeDeviceClassPartitionRequest::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

uint64_t DescribeDeviceClassPartitionRequest::GetContainRaidCard() const
{
    return m_containRaidCard;
}

void DescribeDeviceClassPartitionRequest::SetContainRaidCard(const uint64_t& _containRaidCard)
{
    m_containRaidCard = _containRaidCard;
    m_containRaidCardHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::ContainRaidCardHasBeenSet() const
{
    return m_containRaidCardHasBeenSet;
}

uint64_t DescribeDeviceClassPartitionRequest::GetSystemDiskTypeId() const
{
    return m_systemDiskTypeId;
}

void DescribeDeviceClassPartitionRequest::SetSystemDiskTypeId(const uint64_t& _systemDiskTypeId)
{
    m_systemDiskTypeId = _systemDiskTypeId;
    m_systemDiskTypeIdHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::SystemDiskTypeIdHasBeenSet() const
{
    return m_systemDiskTypeIdHasBeenSet;
}

uint64_t DescribeDeviceClassPartitionRequest::GetSystemDiskCount() const
{
    return m_systemDiskCount;
}

void DescribeDeviceClassPartitionRequest::SetSystemDiskCount(const uint64_t& _systemDiskCount)
{
    m_systemDiskCount = _systemDiskCount;
    m_systemDiskCountHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::SystemDiskCountHasBeenSet() const
{
    return m_systemDiskCountHasBeenSet;
}

uint64_t DescribeDeviceClassPartitionRequest::GetDataDiskTypeId() const
{
    return m_dataDiskTypeId;
}

void DescribeDeviceClassPartitionRequest::SetDataDiskTypeId(const uint64_t& _dataDiskTypeId)
{
    m_dataDiskTypeId = _dataDiskTypeId;
    m_dataDiskTypeIdHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::DataDiskTypeIdHasBeenSet() const
{
    return m_dataDiskTypeIdHasBeenSet;
}

uint64_t DescribeDeviceClassPartitionRequest::GetDataDiskCount() const
{
    return m_dataDiskCount;
}

void DescribeDeviceClassPartitionRequest::SetDataDiskCount(const uint64_t& _dataDiskCount)
{
    m_dataDiskCount = _dataDiskCount;
    m_dataDiskCountHasBeenSet = true;
}

bool DescribeDeviceClassPartitionRequest::DataDiskCountHasBeenSet() const
{
    return m_dataDiskCountHasBeenSet;
}


