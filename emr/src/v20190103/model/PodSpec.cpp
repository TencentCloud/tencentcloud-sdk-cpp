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

#include <tencentcloud/emr/v20190103/model/PodSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

PodSpec::PodSpec() :
    m_resourceProviderIdentifierHasBeenSet(false),
    m_resourceProviderTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_dataVolumesHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_podVolumesHasBeenSet(false)
{
}

CoreInternalOutcome PodSpec::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceProviderIdentifier") && !value["ResourceProviderIdentifier"].IsNull())
    {
        if (!value["ResourceProviderIdentifier"].IsString())
        {
            return CoreInternalOutcome(Error("response `PodSpec.ResourceProviderIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceProviderIdentifier = string(value["ResourceProviderIdentifier"].GetString());
        m_resourceProviderIdentifierHasBeenSet = true;
    }

    if (value.HasMember("ResourceProviderType") && !value["ResourceProviderType"].IsNull())
    {
        if (!value["ResourceProviderType"].IsString())
        {
            return CoreInternalOutcome(Error("response `PodSpec.ResourceProviderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceProviderType = string(value["ResourceProviderType"].GetString());
        m_resourceProviderTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `PodSpec.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PodSpec.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `PodSpec.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("DataVolumes") && !value["DataVolumes"].IsNull())
    {
        if (!value["DataVolumes"].IsArray())
            return CoreInternalOutcome(Error("response `PodSpec.DataVolumes` is not array type"));

        const Value &tmpValue = value["DataVolumes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataVolumes.push_back((*itr).GetString());
        }
        m_dataVolumesHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Error("response `PodSpec.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }

    if (value.HasMember("PodVolumes") && !value["PodVolumes"].IsNull())
    {
        if (!value["PodVolumes"].IsArray())
            return CoreInternalOutcome(Error("response `PodSpec.PodVolumes` is not array type"));

        const Value &tmpValue = value["PodVolumes"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PodVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_podVolumes.push_back(item);
        }
        m_podVolumesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodSpec::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_resourceProviderIdentifierHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceProviderIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resourceProviderIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceProviderTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resourceProviderType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_dataVolumesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dataVolumes.begin(); itr != m_dataVolumes.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cpuTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_podVolumesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PodVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podVolumes.begin(); itr != m_podVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PodSpec::GetResourceProviderIdentifier() const
{
    return m_resourceProviderIdentifier;
}

void PodSpec::SetResourceProviderIdentifier(const string& _resourceProviderIdentifier)
{
    m_resourceProviderIdentifier = _resourceProviderIdentifier;
    m_resourceProviderIdentifierHasBeenSet = true;
}

bool PodSpec::ResourceProviderIdentifierHasBeenSet() const
{
    return m_resourceProviderIdentifierHasBeenSet;
}

string PodSpec::GetResourceProviderType() const
{
    return m_resourceProviderType;
}

void PodSpec::SetResourceProviderType(const string& _resourceProviderType)
{
    m_resourceProviderType = _resourceProviderType;
    m_resourceProviderTypeHasBeenSet = true;
}

bool PodSpec::ResourceProviderTypeHasBeenSet() const
{
    return m_resourceProviderTypeHasBeenSet;
}

string PodSpec::GetNodeType() const
{
    return m_nodeType;
}

void PodSpec::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool PodSpec::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t PodSpec::GetCpu() const
{
    return m_cpu;
}

void PodSpec::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool PodSpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t PodSpec::GetMemory() const
{
    return m_memory;
}

void PodSpec::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool PodSpec::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

vector<string> PodSpec::GetDataVolumes() const
{
    return m_dataVolumes;
}

void PodSpec::SetDataVolumes(const vector<string>& _dataVolumes)
{
    m_dataVolumes = _dataVolumes;
    m_dataVolumesHasBeenSet = true;
}

bool PodSpec::DataVolumesHasBeenSet() const
{
    return m_dataVolumesHasBeenSet;
}

string PodSpec::GetCpuType() const
{
    return m_cpuType;
}

void PodSpec::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool PodSpec::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

vector<PodVolume> PodSpec::GetPodVolumes() const
{
    return m_podVolumes;
}

void PodSpec::SetPodVolumes(const vector<PodVolume>& _podVolumes)
{
    m_podVolumes = _podVolumes;
    m_podVolumesHasBeenSet = true;
}

bool PodSpec::PodVolumesHasBeenSet() const
{
    return m_podVolumesHasBeenSet;
}

