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

#include <tencentcloud/bm/v20180423/model/DescribeDeviceInventoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace rapidjson;
using namespace std;

DescribeDeviceInventoryRequest::DescribeDeviceInventoryRequest() :
    m_zoneHasBeenSet(false),
    m_deviceClassCodeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_cpuIdHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskNumHasBeenSet(false),
    m_memHasBeenSet(false),
    m_haveRaidCardHasBeenSet(false)
{
}

string DescribeDeviceInventoryRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceClassCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeviceClassCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deviceClassCode.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpuId, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskNum, allocator);
    }

    if (m_memHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mem, allocator);
    }

    if (m_haveRaidCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HaveRaidCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_haveRaidCard, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceInventoryRequest::GetZone() const
{
    return m_zone;
}

void DescribeDeviceInventoryRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeDeviceInventoryRequest::GetDeviceClassCode() const
{
    return m_deviceClassCode;
}

void DescribeDeviceInventoryRequest::SetDeviceClassCode(const string& _deviceClassCode)
{
    m_deviceClassCode = _deviceClassCode;
    m_deviceClassCodeHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::DeviceClassCodeHasBeenSet() const
{
    return m_deviceClassCodeHasBeenSet;
}

string DescribeDeviceInventoryRequest::GetVpcId() const
{
    return m_vpcId;
}

void DescribeDeviceInventoryRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeDeviceInventoryRequest::GetSubnetId() const
{
    return m_subnetId;
}

void DescribeDeviceInventoryRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t DescribeDeviceInventoryRequest::GetCpuId() const
{
    return m_cpuId;
}

void DescribeDeviceInventoryRequest::SetCpuId(const uint64_t& _cpuId)
{
    m_cpuId = _cpuId;
    m_cpuIdHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::CpuIdHasBeenSet() const
{
    return m_cpuIdHasBeenSet;
}

string DescribeDeviceInventoryRequest::GetDiskType() const
{
    return m_diskType;
}

void DescribeDeviceInventoryRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

uint64_t DescribeDeviceInventoryRequest::GetDiskSize() const
{
    return m_diskSize;
}

void DescribeDeviceInventoryRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

uint64_t DescribeDeviceInventoryRequest::GetDiskNum() const
{
    return m_diskNum;
}

void DescribeDeviceInventoryRequest::SetDiskNum(const uint64_t& _diskNum)
{
    m_diskNum = _diskNum;
    m_diskNumHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::DiskNumHasBeenSet() const
{
    return m_diskNumHasBeenSet;
}

uint64_t DescribeDeviceInventoryRequest::GetMem() const
{
    return m_mem;
}

void DescribeDeviceInventoryRequest::SetMem(const uint64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

uint64_t DescribeDeviceInventoryRequest::GetHaveRaidCard() const
{
    return m_haveRaidCard;
}

void DescribeDeviceInventoryRequest::SetHaveRaidCard(const uint64_t& _haveRaidCard)
{
    m_haveRaidCard = _haveRaidCard;
    m_haveRaidCardHasBeenSet = true;
}

bool DescribeDeviceInventoryRequest::HaveRaidCardHasBeenSet() const
{
    return m_haveRaidCardHasBeenSet;
}


