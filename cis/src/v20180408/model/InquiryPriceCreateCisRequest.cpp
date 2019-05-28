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

#include <tencentcloud/cis/v20180408/model/InquiryPriceCreateCisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cis::V20180408::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceCreateCisRequest::InquiryPriceCreateCisRequest() :
    m_zoneHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false)
{
}

string InquiryPriceCreateCisRequest::ToJsonString() const
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

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InquiryPriceCreateCisRequest::GetZone() const
{
    return m_zone;
}

void InquiryPriceCreateCisRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InquiryPriceCreateCisRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

double InquiryPriceCreateCisRequest::GetCpu() const
{
    return m_cpu;
}

void InquiryPriceCreateCisRequest::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InquiryPriceCreateCisRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double InquiryPriceCreateCisRequest::GetMemory() const
{
    return m_memory;
}

void InquiryPriceCreateCisRequest::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InquiryPriceCreateCisRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}


