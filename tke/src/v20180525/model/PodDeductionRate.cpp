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

#include <tencentcloud/tke/v20180525/model/PodDeductionRate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PodDeductionRate::PodDeductionRate() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_gpuNumHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_deductionNumHasBeenSet(false)
{
}

CoreInternalOutcome PodDeductionRate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PodDeductionRate.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PodDeductionRate.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodDeductionRate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("GpuNum") && !value["GpuNum"].IsNull())
    {
        if (!value["GpuNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodDeductionRate.GpuNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuNum = string(value["GpuNum"].GetString());
        m_gpuNumHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodDeductionRate.TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("DeductionNum") && !value["DeductionNum"].IsNull())
    {
        if (!value["DeductionNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodDeductionRate.DeductionNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deductionNum = value["DeductionNum"].GetUint64();
        m_deductionNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodDeductionRate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuNum.c_str(), allocator).Move(), allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_deductionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductionNum, allocator);
    }

}


double PodDeductionRate::GetCpu() const
{
    return m_cpu;
}

void PodDeductionRate::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool PodDeductionRate::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double PodDeductionRate::GetMemory() const
{
    return m_memory;
}

void PodDeductionRate::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool PodDeductionRate::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string PodDeductionRate::GetType() const
{
    return m_type;
}

void PodDeductionRate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PodDeductionRate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PodDeductionRate::GetGpuNum() const
{
    return m_gpuNum;
}

void PodDeductionRate::SetGpuNum(const string& _gpuNum)
{
    m_gpuNum = _gpuNum;
    m_gpuNumHasBeenSet = true;
}

bool PodDeductionRate::GpuNumHasBeenSet() const
{
    return m_gpuNumHasBeenSet;
}

uint64_t PodDeductionRate::GetTotalNum() const
{
    return m_totalNum;
}

void PodDeductionRate::SetTotalNum(const uint64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool PodDeductionRate::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

uint64_t PodDeductionRate::GetDeductionNum() const
{
    return m_deductionNum;
}

void PodDeductionRate::SetDeductionNum(const uint64_t& _deductionNum)
{
    m_deductionNum = _deductionNum;
    m_deductionNumHasBeenSet = true;
}

bool PodDeductionRate::DeductionNumHasBeenSet() const
{
    return m_deductionNumHasBeenSet;
}

