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

#include <tencentcloud/dlc/v20210125/model/WorkerSpecDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

WorkerSpecDTO::WorkerSpecDTO() :
    m_nameHasBeenSet(false),
    m_podCpuHasBeenSet(false),
    m_podMemHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_gpuNumHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_resourcesLabelsHasBeenSet(false),
    m_minPodNumHasBeenSet(false),
    m_maxPodNumHasBeenSet(false),
    m_enableAutoScalingHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_specHasBeenSet(false),
    m_billingItemHasBeenSet(false)
{
}

CoreInternalOutcome WorkerSpecDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PodCpu") && !value["PodCpu"].IsNull())
    {
        if (!value["PodCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.PodCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podCpu = value["PodCpu"].GetInt64();
        m_podCpuHasBeenSet = true;
    }

    if (value.HasMember("PodMem") && !value["PodMem"].IsNull())
    {
        if (!value["PodMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.PodMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podMem = value["PodMem"].GetInt64();
        m_podMemHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("GpuNum") && !value["GpuNum"].IsNull())
    {
        if (!value["GpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.GpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuNum = value["GpuNum"].GetInt64();
        m_gpuNumHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.Envs` is not array type"));

        const rapidjson::Value &tmpValue = value["Envs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Env item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envs.push_back(item);
        }
        m_envsHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("ResourcesLabels") && !value["ResourcesLabels"].IsNull())
    {
        if (!value["ResourcesLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.ResourcesLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourcesLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourcesLabels.push_back(item);
        }
        m_resourcesLabelsHasBeenSet = true;
    }

    if (value.HasMember("MinPodNum") && !value["MinPodNum"].IsNull())
    {
        if (!value["MinPodNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.MinPodNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minPodNum = value["MinPodNum"].GetInt64();
        m_minPodNumHasBeenSet = true;
    }

    if (value.HasMember("MaxPodNum") && !value["MaxPodNum"].IsNull())
    {
        if (!value["MaxPodNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.MaxPodNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPodNum = value["MaxPodNum"].GetInt64();
        m_maxPodNumHasBeenSet = true;
    }

    if (value.HasMember("EnableAutoScaling") && !value["EnableAutoScaling"].IsNull())
    {
        if (!value["EnableAutoScaling"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.EnableAutoScaling` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoScaling = value["EnableAutoScaling"].GetBool();
        m_enableAutoScalingHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.Spec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spec = value["Spec"].GetInt64();
        m_specHasBeenSet = true;
    }

    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkerSpecDTO.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkerSpecDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_podCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCpu, allocator);
    }

    if (m_podMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podMem, allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuNum, allocator);
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourcesLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcesLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourcesLabels.begin(); itr != m_resourcesLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_minPodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinPodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minPodNum, allocator);
    }

    if (m_maxPodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPodNum, allocator);
    }

    if (m_enableAutoScalingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoScaling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoScaling, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spec, allocator);
    }

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

}


string WorkerSpecDTO::GetName() const
{
    return m_name;
}

void WorkerSpecDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WorkerSpecDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t WorkerSpecDTO::GetPodCpu() const
{
    return m_podCpu;
}

void WorkerSpecDTO::SetPodCpu(const int64_t& _podCpu)
{
    m_podCpu = _podCpu;
    m_podCpuHasBeenSet = true;
}

bool WorkerSpecDTO::PodCpuHasBeenSet() const
{
    return m_podCpuHasBeenSet;
}

int64_t WorkerSpecDTO::GetPodMem() const
{
    return m_podMem;
}

void WorkerSpecDTO::SetPodMem(const int64_t& _podMem)
{
    m_podMem = _podMem;
    m_podMemHasBeenSet = true;
}

bool WorkerSpecDTO::PodMemHasBeenSet() const
{
    return m_podMemHasBeenSet;
}

string WorkerSpecDTO::GetGpuType() const
{
    return m_gpuType;
}

void WorkerSpecDTO::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool WorkerSpecDTO::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

int64_t WorkerSpecDTO::GetGpuNum() const
{
    return m_gpuNum;
}

void WorkerSpecDTO::SetGpuNum(const int64_t& _gpuNum)
{
    m_gpuNum = _gpuNum;
    m_gpuNumHasBeenSet = true;
}

bool WorkerSpecDTO::GpuNumHasBeenSet() const
{
    return m_gpuNumHasBeenSet;
}

vector<Env> WorkerSpecDTO::GetEnvs() const
{
    return m_envs;
}

void WorkerSpecDTO::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool WorkerSpecDTO::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<Label> WorkerSpecDTO::GetLabels() const
{
    return m_labels;
}

void WorkerSpecDTO::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool WorkerSpecDTO::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Label> WorkerSpecDTO::GetResourcesLabels() const
{
    return m_resourcesLabels;
}

void WorkerSpecDTO::SetResourcesLabels(const vector<Label>& _resourcesLabels)
{
    m_resourcesLabels = _resourcesLabels;
    m_resourcesLabelsHasBeenSet = true;
}

bool WorkerSpecDTO::ResourcesLabelsHasBeenSet() const
{
    return m_resourcesLabelsHasBeenSet;
}

int64_t WorkerSpecDTO::GetMinPodNum() const
{
    return m_minPodNum;
}

void WorkerSpecDTO::SetMinPodNum(const int64_t& _minPodNum)
{
    m_minPodNum = _minPodNum;
    m_minPodNumHasBeenSet = true;
}

bool WorkerSpecDTO::MinPodNumHasBeenSet() const
{
    return m_minPodNumHasBeenSet;
}

int64_t WorkerSpecDTO::GetMaxPodNum() const
{
    return m_maxPodNum;
}

void WorkerSpecDTO::SetMaxPodNum(const int64_t& _maxPodNum)
{
    m_maxPodNum = _maxPodNum;
    m_maxPodNumHasBeenSet = true;
}

bool WorkerSpecDTO::MaxPodNumHasBeenSet() const
{
    return m_maxPodNumHasBeenSet;
}

bool WorkerSpecDTO::GetEnableAutoScaling() const
{
    return m_enableAutoScaling;
}

void WorkerSpecDTO::SetEnableAutoScaling(const bool& _enableAutoScaling)
{
    m_enableAutoScaling = _enableAutoScaling;
    m_enableAutoScalingHasBeenSet = true;
}

bool WorkerSpecDTO::EnableAutoScalingHasBeenSet() const
{
    return m_enableAutoScalingHasBeenSet;
}

string WorkerSpecDTO::GetResourceType() const
{
    return m_resourceType;
}

void WorkerSpecDTO::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool WorkerSpecDTO::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string WorkerSpecDTO::GetInstanceType() const
{
    return m_instanceType;
}

void WorkerSpecDTO::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool WorkerSpecDTO::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t WorkerSpecDTO::GetSpec() const
{
    return m_spec;
}

void WorkerSpecDTO::SetSpec(const int64_t& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool WorkerSpecDTO::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string WorkerSpecDTO::GetBillingItem() const
{
    return m_billingItem;
}

void WorkerSpecDTO::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool WorkerSpecDTO::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

