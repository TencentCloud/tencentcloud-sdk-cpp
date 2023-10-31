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

#include <tencentcloud/cbs/v20170312/model/DescribeDiskConfigQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

DescribeDiskConfigQuotaRequest::DescribeDiskConfigQuotaRequest() :
    m_inquiryTypeHasBeenSet(false),
    m_diskChargeTypeHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false),
    m_diskTypesHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false)
{
}

string DescribeDiskConfigQuotaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inquiryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquiryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inquiryType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamiliesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamilies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceFamilies.begin(); itr != m_instanceFamilies.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diskTypes.begin(); itr != m_diskTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cPU, allocator);
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDiskConfigQuotaRequest::GetInquiryType() const
{
    return m_inquiryType;
}

void DescribeDiskConfigQuotaRequest::SetInquiryType(const string& _inquiryType)
{
    m_inquiryType = _inquiryType;
    m_inquiryTypeHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::InquiryTypeHasBeenSet() const
{
    return m_inquiryTypeHasBeenSet;
}

string DescribeDiskConfigQuotaRequest::GetDiskChargeType() const
{
    return m_diskChargeType;
}

void DescribeDiskConfigQuotaRequest::SetDiskChargeType(const string& _diskChargeType)
{
    m_diskChargeType = _diskChargeType;
    m_diskChargeTypeHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::DiskChargeTypeHasBeenSet() const
{
    return m_diskChargeTypeHasBeenSet;
}

vector<string> DescribeDiskConfigQuotaRequest::GetInstanceFamilies() const
{
    return m_instanceFamilies;
}

void DescribeDiskConfigQuotaRequest::SetInstanceFamilies(const vector<string>& _instanceFamilies)
{
    m_instanceFamilies = _instanceFamilies;
    m_instanceFamiliesHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::InstanceFamiliesHasBeenSet() const
{
    return m_instanceFamiliesHasBeenSet;
}

vector<string> DescribeDiskConfigQuotaRequest::GetDiskTypes() const
{
    return m_diskTypes;
}

void DescribeDiskConfigQuotaRequest::SetDiskTypes(const vector<string>& _diskTypes)
{
    m_diskTypes = _diskTypes;
    m_diskTypesHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::DiskTypesHasBeenSet() const
{
    return m_diskTypesHasBeenSet;
}

vector<string> DescribeDiskConfigQuotaRequest::GetZones() const
{
    return m_zones;
}

void DescribeDiskConfigQuotaRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

uint64_t DescribeDiskConfigQuotaRequest::GetMemory() const
{
    return m_memory;
}

void DescribeDiskConfigQuotaRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string DescribeDiskConfigQuotaRequest::GetDiskUsage() const
{
    return m_diskUsage;
}

void DescribeDiskConfigQuotaRequest::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

uint64_t DescribeDiskConfigQuotaRequest::GetCPU() const
{
    return m_cPU;
}

void DescribeDiskConfigQuotaRequest::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

string DescribeDiskConfigQuotaRequest::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void DescribeDiskConfigQuotaRequest::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool DescribeDiskConfigQuotaRequest::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}


