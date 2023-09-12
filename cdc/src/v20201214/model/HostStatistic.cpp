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

#include <tencentcloud/cdc/v20201214/model/HostStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

HostStatistic::HostStatistic() :
    m_hostTypeHasBeenSet(false),
    m_hostFamilyHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_countHasBeenSet(false),
    m_cpuAverageHasBeenSet(false),
    m_memAverageHasBeenSet(false),
    m_netAverageHasBeenSet(false),
    m_cpuDetailDataHasBeenSet(false),
    m_memDetailDataHasBeenSet(false),
    m_netRateDetailDataHasBeenSet(false),
    m_netPacketDetailDataHasBeenSet(false)
{
}

CoreInternalOutcome HostStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostType") && !value["HostType"].IsNull())
    {
        if (!value["HostType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.HostType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostType = string(value["HostType"].GetString());
        m_hostTypeHasBeenSet = true;
    }

    if (value.HasMember("HostFamily") && !value["HostFamily"].IsNull())
    {
        if (!value["HostFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.HostFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostFamily = string(value["HostFamily"].GetString());
        m_hostFamilyHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("CpuAverage") && !value["CpuAverage"].IsNull())
    {
        if (!value["CpuAverage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.CpuAverage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAverage = value["CpuAverage"].GetDouble();
        m_cpuAverageHasBeenSet = true;
    }

    if (value.HasMember("MemAverage") && !value["MemAverage"].IsNull())
    {
        if (!value["MemAverage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.MemAverage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memAverage = value["MemAverage"].GetDouble();
        m_memAverageHasBeenSet = true;
    }

    if (value.HasMember("NetAverage") && !value["NetAverage"].IsNull())
    {
        if (!value["NetAverage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.NetAverage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_netAverage = value["NetAverage"].GetDouble();
        m_netAverageHasBeenSet = true;
    }

    if (value.HasMember("CpuDetailData") && !value["CpuDetailData"].IsNull())
    {
        if (!value["CpuDetailData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.CpuDetailData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cpuDetailData.Deserialize(value["CpuDetailData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cpuDetailDataHasBeenSet = true;
    }

    if (value.HasMember("MemDetailData") && !value["MemDetailData"].IsNull())
    {
        if (!value["MemDetailData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.MemDetailData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memDetailData.Deserialize(value["MemDetailData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memDetailDataHasBeenSet = true;
    }

    if (value.HasMember("NetRateDetailData") && !value["NetRateDetailData"].IsNull())
    {
        if (!value["NetRateDetailData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.NetRateDetailData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_netRateDetailData.Deserialize(value["NetRateDetailData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netRateDetailDataHasBeenSet = true;
    }

    if (value.HasMember("NetPacketDetailData") && !value["NetPacketDetailData"].IsNull())
    {
        if (!value["NetPacketDetailData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatistic.NetPacketDetailData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_netPacketDetailData.Deserialize(value["NetPacketDetailData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_netPacketDetailDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostType.c_str(), allocator).Move(), allocator);
    }

    if (m_hostFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostFamily.c_str(), allocator).Move(), allocator);
    }

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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_cpuAverageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuAverage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuAverage, allocator);
    }

    if (m_memAverageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemAverage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memAverage, allocator);
    }

    if (m_netAverageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAverage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netAverage, allocator);
    }

    if (m_cpuDetailDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuDetailData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cpuDetailData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memDetailDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemDetailData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memDetailData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_netRateDetailDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetRateDetailData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netRateDetailData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_netPacketDetailDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetPacketDetailData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_netPacketDetailData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string HostStatistic::GetHostType() const
{
    return m_hostType;
}

void HostStatistic::SetHostType(const string& _hostType)
{
    m_hostType = _hostType;
    m_hostTypeHasBeenSet = true;
}

bool HostStatistic::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

string HostStatistic::GetHostFamily() const
{
    return m_hostFamily;
}

void HostStatistic::SetHostFamily(const string& _hostFamily)
{
    m_hostFamily = _hostFamily;
    m_hostFamilyHasBeenSet = true;
}

bool HostStatistic::HostFamilyHasBeenSet() const
{
    return m_hostFamilyHasBeenSet;
}

uint64_t HostStatistic::GetCpu() const
{
    return m_cpu;
}

void HostStatistic::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool HostStatistic::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t HostStatistic::GetMemory() const
{
    return m_memory;
}

void HostStatistic::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool HostStatistic::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t HostStatistic::GetCount() const
{
    return m_count;
}

void HostStatistic::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool HostStatistic::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

double HostStatistic::GetCpuAverage() const
{
    return m_cpuAverage;
}

void HostStatistic::SetCpuAverage(const double& _cpuAverage)
{
    m_cpuAverage = _cpuAverage;
    m_cpuAverageHasBeenSet = true;
}

bool HostStatistic::CpuAverageHasBeenSet() const
{
    return m_cpuAverageHasBeenSet;
}

double HostStatistic::GetMemAverage() const
{
    return m_memAverage;
}

void HostStatistic::SetMemAverage(const double& _memAverage)
{
    m_memAverage = _memAverage;
    m_memAverageHasBeenSet = true;
}

bool HostStatistic::MemAverageHasBeenSet() const
{
    return m_memAverageHasBeenSet;
}

double HostStatistic::GetNetAverage() const
{
    return m_netAverage;
}

void HostStatistic::SetNetAverage(const double& _netAverage)
{
    m_netAverage = _netAverage;
    m_netAverageHasBeenSet = true;
}

bool HostStatistic::NetAverageHasBeenSet() const
{
    return m_netAverageHasBeenSet;
}

DetailData HostStatistic::GetCpuDetailData() const
{
    return m_cpuDetailData;
}

void HostStatistic::SetCpuDetailData(const DetailData& _cpuDetailData)
{
    m_cpuDetailData = _cpuDetailData;
    m_cpuDetailDataHasBeenSet = true;
}

bool HostStatistic::CpuDetailDataHasBeenSet() const
{
    return m_cpuDetailDataHasBeenSet;
}

DetailData HostStatistic::GetMemDetailData() const
{
    return m_memDetailData;
}

void HostStatistic::SetMemDetailData(const DetailData& _memDetailData)
{
    m_memDetailData = _memDetailData;
    m_memDetailDataHasBeenSet = true;
}

bool HostStatistic::MemDetailDataHasBeenSet() const
{
    return m_memDetailDataHasBeenSet;
}

DetailData HostStatistic::GetNetRateDetailData() const
{
    return m_netRateDetailData;
}

void HostStatistic::SetNetRateDetailData(const DetailData& _netRateDetailData)
{
    m_netRateDetailData = _netRateDetailData;
    m_netRateDetailDataHasBeenSet = true;
}

bool HostStatistic::NetRateDetailDataHasBeenSet() const
{
    return m_netRateDetailDataHasBeenSet;
}

DetailData HostStatistic::GetNetPacketDetailData() const
{
    return m_netPacketDetailData;
}

void HostStatistic::SetNetPacketDetailData(const DetailData& _netPacketDetailData)
{
    m_netPacketDetailData = _netPacketDetailData;
    m_netPacketDetailDataHasBeenSet = true;
}

bool HostStatistic::NetPacketDetailDataHasBeenSet() const
{
    return m_netPacketDetailDataHasBeenSet;
}

