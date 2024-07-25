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

#include <tencentcloud/tke/v20180525/model/ReservedInstanceUtilizationRate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ReservedInstanceUtilizationRate::ReservedInstanceUtilizationRate() :
    m_rateHasBeenSet(false),
    m_numHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_gpuNumHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_podNumHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstanceUtilizationRate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rate") && !value["Rate"].IsNull())
    {
        if (!value["Rate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.Rate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rate = value["Rate"].GetDouble();
        m_rateHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.Num` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetUint64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.CPU` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetDouble();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("GpuNum") && !value["GpuNum"].IsNull())
    {
        if (!value["GpuNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.GpuNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuNum = string(value["GpuNum"].GetString());
        m_gpuNumHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("PodNum") && !value["PodNum"].IsNull())
    {
        if (!value["PodNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstanceUtilizationRate.PodNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_podNum = value["PodNum"].GetUint64();
        m_podNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedInstanceUtilizationRate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rate, allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
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

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_podNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podNum, allocator);
    }

}


double ReservedInstanceUtilizationRate::GetRate() const
{
    return m_rate;
}

void ReservedInstanceUtilizationRate::SetRate(const double& _rate)
{
    m_rate = _rate;
    m_rateHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::RateHasBeenSet() const
{
    return m_rateHasBeenSet;
}

uint64_t ReservedInstanceUtilizationRate::GetNum() const
{
    return m_num;
}

void ReservedInstanceUtilizationRate::SetNum(const uint64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

double ReservedInstanceUtilizationRate::GetCPU() const
{
    return m_cPU;
}

void ReservedInstanceUtilizationRate::SetCPU(const double& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

double ReservedInstanceUtilizationRate::GetMemory() const
{
    return m_memory;
}

void ReservedInstanceUtilizationRate::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ReservedInstanceUtilizationRate::GetType() const
{
    return m_type;
}

void ReservedInstanceUtilizationRate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ReservedInstanceUtilizationRate::GetGpuNum() const
{
    return m_gpuNum;
}

void ReservedInstanceUtilizationRate::SetGpuNum(const string& _gpuNum)
{
    m_gpuNum = _gpuNum;
    m_gpuNumHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::GpuNumHasBeenSet() const
{
    return m_gpuNumHasBeenSet;
}

string ReservedInstanceUtilizationRate::GetZone() const
{
    return m_zone;
}

void ReservedInstanceUtilizationRate::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ReservedInstanceUtilizationRate::GetClusterId() const
{
    return m_clusterId;
}

void ReservedInstanceUtilizationRate::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ReservedInstanceUtilizationRate::GetNodeName() const
{
    return m_nodeName;
}

void ReservedInstanceUtilizationRate::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

uint64_t ReservedInstanceUtilizationRate::GetPodNum() const
{
    return m_podNum;
}

void ReservedInstanceUtilizationRate::SetPodNum(const uint64_t& _podNum)
{
    m_podNum = _podNum;
    m_podNumHasBeenSet = true;
}

bool ReservedInstanceUtilizationRate::PodNumHasBeenSet() const
{
    return m_podNumHasBeenSet;
}

