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

#include <tencentcloud/emr/v20190103/model/PodNewSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

PodNewSpec::PodNewSpec() :
    m_resourceProviderIdentifierHasBeenSet(false),
    m_resourceProviderTypeHasBeenSet(false),
    m_nodeFlagHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_cpuTypeHasBeenSet(false),
    m_podVolumesHasBeenSet(false),
    m_enableDynamicSpecFlagHasBeenSet(false),
    m_dynamicPodSpecHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_podNameHasBeenSet(false)
{
}

CoreInternalOutcome PodNewSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceProviderIdentifier") && !value["ResourceProviderIdentifier"].IsNull())
    {
        if (!value["ResourceProviderIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.ResourceProviderIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceProviderIdentifier = string(value["ResourceProviderIdentifier"].GetString());
        m_resourceProviderIdentifierHasBeenSet = true;
    }

    if (value.HasMember("ResourceProviderType") && !value["ResourceProviderType"].IsNull())
    {
        if (!value["ResourceProviderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.ResourceProviderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceProviderType = string(value["ResourceProviderType"].GetString());
        m_resourceProviderTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeFlag") && !value["NodeFlag"].IsNull())
    {
        if (!value["NodeFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.NodeFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeFlag = string(value["NodeFlag"].GetString());
        m_nodeFlagHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("CpuType") && !value["CpuType"].IsNull())
    {
        if (!value["CpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(value["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }

    if (value.HasMember("PodVolumes") && !value["PodVolumes"].IsNull())
    {
        if (!value["PodVolumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.PodVolumes` is not array type"));

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

    if (value.HasMember("EnableDynamicSpecFlag") && !value["EnableDynamicSpecFlag"].IsNull())
    {
        if (!value["EnableDynamicSpecFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.EnableDynamicSpecFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDynamicSpecFlag = value["EnableDynamicSpecFlag"].GetBool();
        m_enableDynamicSpecFlagHasBeenSet = true;
    }

    if (value.HasMember("DynamicPodSpec") && !value["DynamicPodSpec"].IsNull())
    {
        if (!value["DynamicPodSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.DynamicPodSpec` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodNewSpec.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodNewSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_nodeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeFlag.c_str(), allocator).Move(), allocator);
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

    if (m_enableDynamicSpecFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDynamicSpecFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDynamicSpecFlag, allocator);
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


string PodNewSpec::GetResourceProviderIdentifier() const
{
    return m_resourceProviderIdentifier;
}

void PodNewSpec::SetResourceProviderIdentifier(const string& _resourceProviderIdentifier)
{
    m_resourceProviderIdentifier = _resourceProviderIdentifier;
    m_resourceProviderIdentifierHasBeenSet = true;
}

bool PodNewSpec::ResourceProviderIdentifierHasBeenSet() const
{
    return m_resourceProviderIdentifierHasBeenSet;
}

string PodNewSpec::GetResourceProviderType() const
{
    return m_resourceProviderType;
}

void PodNewSpec::SetResourceProviderType(const string& _resourceProviderType)
{
    m_resourceProviderType = _resourceProviderType;
    m_resourceProviderTypeHasBeenSet = true;
}

bool PodNewSpec::ResourceProviderTypeHasBeenSet() const
{
    return m_resourceProviderTypeHasBeenSet;
}

string PodNewSpec::GetNodeFlag() const
{
    return m_nodeFlag;
}

void PodNewSpec::SetNodeFlag(const string& _nodeFlag)
{
    m_nodeFlag = _nodeFlag;
    m_nodeFlagHasBeenSet = true;
}

bool PodNewSpec::NodeFlagHasBeenSet() const
{
    return m_nodeFlagHasBeenSet;
}

uint64_t PodNewSpec::GetCpu() const
{
    return m_cpu;
}

void PodNewSpec::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool PodNewSpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t PodNewSpec::GetMemory() const
{
    return m_memory;
}

void PodNewSpec::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool PodNewSpec::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string PodNewSpec::GetCpuType() const
{
    return m_cpuType;
}

void PodNewSpec::SetCpuType(const string& _cpuType)
{
    m_cpuType = _cpuType;
    m_cpuTypeHasBeenSet = true;
}

bool PodNewSpec::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}

vector<PodVolume> PodNewSpec::GetPodVolumes() const
{
    return m_podVolumes;
}

void PodNewSpec::SetPodVolumes(const vector<PodVolume>& _podVolumes)
{
    m_podVolumes = _podVolumes;
    m_podVolumesHasBeenSet = true;
}

bool PodNewSpec::PodVolumesHasBeenSet() const
{
    return m_podVolumesHasBeenSet;
}

bool PodNewSpec::GetEnableDynamicSpecFlag() const
{
    return m_enableDynamicSpecFlag;
}

void PodNewSpec::SetEnableDynamicSpecFlag(const bool& _enableDynamicSpecFlag)
{
    m_enableDynamicSpecFlag = _enableDynamicSpecFlag;
    m_enableDynamicSpecFlagHasBeenSet = true;
}

bool PodNewSpec::EnableDynamicSpecFlagHasBeenSet() const
{
    return m_enableDynamicSpecFlagHasBeenSet;
}

DynamicPodSpec PodNewSpec::GetDynamicPodSpec() const
{
    return m_dynamicPodSpec;
}

void PodNewSpec::SetDynamicPodSpec(const DynamicPodSpec& _dynamicPodSpec)
{
    m_dynamicPodSpec = _dynamicPodSpec;
    m_dynamicPodSpecHasBeenSet = true;
}

bool PodNewSpec::DynamicPodSpecHasBeenSet() const
{
    return m_dynamicPodSpecHasBeenSet;
}

string PodNewSpec::GetVpcId() const
{
    return m_vpcId;
}

void PodNewSpec::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool PodNewSpec::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string PodNewSpec::GetSubnetId() const
{
    return m_subnetId;
}

void PodNewSpec::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool PodNewSpec::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string PodNewSpec::GetPodName() const
{
    return m_podName;
}

void PodNewSpec::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool PodNewSpec::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

