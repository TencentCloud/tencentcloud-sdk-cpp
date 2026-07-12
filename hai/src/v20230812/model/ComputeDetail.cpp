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

#include <tencentcloud/hai/v20230812/model/ComputeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ComputeDetail::ComputeDetail() :
    m_bundleTypeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_gPUCountHasBeenSet(false),
    m_gPUMemoryHasBeenSet(false),
    m_gPUPerformanceHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_prepaidEnableHasBeenSet(false),
    m_postpaidEnableHasBeenSet(false)
{
}

CoreInternalOutcome ComputeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BundleType") && !value["BundleType"].IsNull())
    {
        if (!value["BundleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.BundleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleType = string(value["BundleType"].GetString());
        m_bundleTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("GPUCount") && !value["GPUCount"].IsNull())
    {
        if (!value["GPUCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.GPUCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUCount = string(value["GPUCount"].GetString());
        m_gPUCountHasBeenSet = true;
    }

    if (value.HasMember("GPUMemory") && !value["GPUMemory"].IsNull())
    {
        if (!value["GPUMemory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.GPUMemory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUMemory = string(value["GPUMemory"].GetString());
        m_gPUMemoryHasBeenSet = true;
    }

    if (value.HasMember("GPUPerformance") && !value["GPUPerformance"].IsNull())
    {
        if (!value["GPUPerformance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.GPUPerformance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gPUPerformance = string(value["GPUPerformance"].GetString());
        m_gPUPerformanceHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.CPU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = string(value["CPU"].GetString());
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.Memory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memory = string(value["Memory"].GetString());
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("PrepaidEnable") && !value["PrepaidEnable"].IsNull())
    {
        if (!value["PrepaidEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.PrepaidEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_prepaidEnable = value["PrepaidEnable"].GetBool();
        m_prepaidEnableHasBeenSet = true;
    }

    if (value.HasMember("PostpaidEnable") && !value["PostpaidEnable"].IsNull())
    {
        if (!value["PostpaidEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ComputeDetail.PostpaidEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_postpaidEnable = value["PostpaidEnable"].GetBool();
        m_postpaidEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComputeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bundleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bundleType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_gPUCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUCount.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUMemory.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUPerformance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gPUPerformance.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cPU.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memory.c_str(), allocator).Move(), allocator);
    }

    if (m_prepaidEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrepaidEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prepaidEnable, allocator);
    }

    if (m_postpaidEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostpaidEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postpaidEnable, allocator);
    }

}


string ComputeDetail::GetBundleType() const
{
    return m_bundleType;
}

void ComputeDetail::SetBundleType(const string& _bundleType)
{
    m_bundleType = _bundleType;
    m_bundleTypeHasBeenSet = true;
}

bool ComputeDetail::BundleTypeHasBeenSet() const
{
    return m_bundleTypeHasBeenSet;
}

int64_t ComputeDetail::GetCount() const
{
    return m_count;
}

void ComputeDetail::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ComputeDetail::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string ComputeDetail::GetGPUCount() const
{
    return m_gPUCount;
}

void ComputeDetail::SetGPUCount(const string& _gPUCount)
{
    m_gPUCount = _gPUCount;
    m_gPUCountHasBeenSet = true;
}

bool ComputeDetail::GPUCountHasBeenSet() const
{
    return m_gPUCountHasBeenSet;
}

string ComputeDetail::GetGPUMemory() const
{
    return m_gPUMemory;
}

void ComputeDetail::SetGPUMemory(const string& _gPUMemory)
{
    m_gPUMemory = _gPUMemory;
    m_gPUMemoryHasBeenSet = true;
}

bool ComputeDetail::GPUMemoryHasBeenSet() const
{
    return m_gPUMemoryHasBeenSet;
}

string ComputeDetail::GetGPUPerformance() const
{
    return m_gPUPerformance;
}

void ComputeDetail::SetGPUPerformance(const string& _gPUPerformance)
{
    m_gPUPerformance = _gPUPerformance;
    m_gPUPerformanceHasBeenSet = true;
}

bool ComputeDetail::GPUPerformanceHasBeenSet() const
{
    return m_gPUPerformanceHasBeenSet;
}

string ComputeDetail::GetCPU() const
{
    return m_cPU;
}

void ComputeDetail::SetCPU(const string& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool ComputeDetail::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

string ComputeDetail::GetMemory() const
{
    return m_memory;
}

void ComputeDetail::SetMemory(const string& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ComputeDetail::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

bool ComputeDetail::GetPrepaidEnable() const
{
    return m_prepaidEnable;
}

void ComputeDetail::SetPrepaidEnable(const bool& _prepaidEnable)
{
    m_prepaidEnable = _prepaidEnable;
    m_prepaidEnableHasBeenSet = true;
}

bool ComputeDetail::PrepaidEnableHasBeenSet() const
{
    return m_prepaidEnableHasBeenSet;
}

bool ComputeDetail::GetPostpaidEnable() const
{
    return m_postpaidEnable;
}

void ComputeDetail::SetPostpaidEnable(const bool& _postpaidEnable)
{
    m_postpaidEnable = _postpaidEnable;
    m_postpaidEnableHasBeenSet = true;
}

bool ComputeDetail::PostpaidEnableHasBeenSet() const
{
    return m_postpaidEnableHasBeenSet;
}

