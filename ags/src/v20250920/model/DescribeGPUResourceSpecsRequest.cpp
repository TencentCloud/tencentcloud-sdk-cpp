/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ags/v20250920/model/DescribeGPUResourceSpecsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

DescribeGPUResourceSpecsRequest::DescribeGPUResourceSpecsRequest() :
    m_gPUTypeHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gPUNumHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeGPUResourceSpecsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_memory, allocator);
    }

    if (m_gPUNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gPUNum, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGPUResourceSpecsRequest::GetGPUType() const
{
    return m_gPUType;
}

void DescribeGPUResourceSpecsRequest::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool DescribeGPUResourceSpecsRequest::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

uint64_t DescribeGPUResourceSpecsRequest::GetCPU() const
{
    return m_cPU;
}

void DescribeGPUResourceSpecsRequest::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool DescribeGPUResourceSpecsRequest::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t DescribeGPUResourceSpecsRequest::GetMemory() const
{
    return m_memory;
}

void DescribeGPUResourceSpecsRequest::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DescribeGPUResourceSpecsRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t DescribeGPUResourceSpecsRequest::GetGPUNum() const
{
    return m_gPUNum;
}

void DescribeGPUResourceSpecsRequest::SetGPUNum(const uint64_t& _gPUNum)
{
    m_gPUNum = _gPUNum;
    m_gPUNumHasBeenSet = true;
}

bool DescribeGPUResourceSpecsRequest::GPUNumHasBeenSet() const
{
    return m_gPUNumHasBeenSet;
}

int64_t DescribeGPUResourceSpecsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGPUResourceSpecsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGPUResourceSpecsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeGPUResourceSpecsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGPUResourceSpecsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGPUResourceSpecsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


