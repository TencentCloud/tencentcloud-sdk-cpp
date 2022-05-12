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
using namespace std;

PodSpec::PodSpec() :
    m_resourceProviderIdentifierHasBeenSet(false),
    m_resourceProviderTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_dataVolumesHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_podVolumesHasBeenSet(false),
    m_isDynamicSpecHasBeenSet(false),
    m_dynamicPodSpecHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_podNameHasBeenSet(false)
{
}

CoreInternalOutcome PodSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceProviderIdentifier") && !value["ResourceProviderIdentifier"].IsNull())
    {
        if (!value["ResourceProviderIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.ResourceProviderIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceProviderIdentifier = string(value["ResourceProviderIdentifier"].GetString());
        m_resourceProviderIdentifierHasBeenSet = true;
    }

    if (value.HasMember("ResourceProviderType") && !value["ResourceProviderType"].IsNull())
    {
        if (!value["ResourceProviderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.ResourceProviderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceProviderType = string(value["ResourceProviderType"].GetString());
        m_resourceProviderTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("DataVolumes") && !value["DataVolumes"].IsNull())
    {
        if (!value["DataVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PodSpec.DataVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["DataVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataVolumes.push_back((*itr).GetString());
        }
        m_dataVolumesHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }

    if (value.HasMember("PodVolumes") && !value["PodVolumes"].IsNull())
    {
        if (!value["PodVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PodSpec.PodVolumes` is not array type"));

        const rapidjson::Value &tmpValue = value["PodVolumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("IsDynamicSpec") && !value["IsDynamicSpec"].IsNull())
    {
        if (!value["IsDynamicSpec"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.IsDynamicSpec` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDynamicSpec = value["IsDynamicSpec"].GetUint64();
        m_isDynamicSpecHasBeenSet = true;
    }

    if (value.HasMember("DynamicPodSpec") && !value["DynamicPodSpec"].IsNull())
    {
        if (!value["DynamicPodSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.DynamicPodSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dynamicPodSpec.Deserialize(value["DynamicPodSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dynamicPodSpecHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodSpec.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceProviderIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceProviderIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceProviderIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceProviderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceProviderType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
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

    if (m_dataVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataVolumes.begin(); itr != m_dataVolumes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_podVolumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodVolumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podVolumes.begin(); itr != m_podVolumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isDynamicSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDynamicSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDynamicSpec, allocator);
    }

    if (m_dynamicPodSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicPodSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicPodSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
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

uint64_t PodSpec::GetIsDynamicSpec() const
{
    return m_isDynamicSpec;
}

void PodSpec::SetIsDynamicSpec(const uint64_t& _isDynamicSpec)
{
    m_isDynamicSpec = _isDynamicSpec;
    m_isDynamicSpecHasBeenSet = true;
}

bool PodSpec::IsDynamicSpecHasBeenSet() const
{
    return m_isDynamicSpecHasBeenSet;
}

DynamicPodSpec PodSpec::GetDynamicPodSpec() const
{
    return m_dynamicPodSpec;
}

void PodSpec::SetDynamicPodSpec(const DynamicPodSpec& _dynamicPodSpec)
{
    m_dynamicPodSpec = _dynamicPodSpec;
    m_dynamicPodSpecHasBeenSet = true;
}

bool PodSpec::DynamicPodSpecHasBeenSet() const
{
    return m_dynamicPodSpecHasBeenSet;
}

string PodSpec::GetVpcId() const
{
    return m_vpcId;
}

void PodSpec::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PodSpec::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PodSpec::GetSubnetId() const
{
    return m_subnetId;
}

void PodSpec::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PodSpec::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string PodSpec::GetPodName() const
{
    return m_podName;
}

void PodSpec::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool PodSpec::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

