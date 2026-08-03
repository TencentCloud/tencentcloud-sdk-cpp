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

#include <tencentcloud/dlc/v20210125/model/HeadSpecDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

HeadSpecDTO::HeadSpecDTO() :
    m_nameHasBeenSet(false),
    m_podCpuHasBeenSet(false),
    m_podMemHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_gpuNumHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_resourcesLabelsHasBeenSet(false),
    m_podNumHasBeenSet(false),
    m_highAvailabilityHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_specHasBeenSet(false),
    m_billingItemHasBeenSet(false)
{
}

CoreInternalOutcome HeadSpecDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PodCpu") && !value["PodCpu"].IsNull())
    {
        if (!value["PodCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.PodCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podCpu = value["PodCpu"].GetInt64();
        m_podCpuHasBeenSet = true;
    }

    if (value.HasMember("PodMem") && !value["PodMem"].IsNull())
    {
        if (!value["PodMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.PodMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podMem = value["PodMem"].GetInt64();
        m_podMemHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("GpuNum") && !value["GpuNum"].IsNull())
    {
        if (!value["GpuNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.GpuNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuNum = value["GpuNum"].GetInt64();
        m_gpuNumHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.Envs` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.Labels` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.ResourcesLabels` is not array type"));

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

    if (value.HasMember("PodNum") && !value["PodNum"].IsNull())
    {
        if (!value["PodNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.PodNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podNum = value["PodNum"].GetInt64();
        m_podNumHasBeenSet = true;
    }

    if (value.HasMember("HighAvailability") && !value["HighAvailability"].IsNull())
    {
        if (!value["HighAvailability"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.HighAvailability` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_highAvailability = value["HighAvailability"].GetBool();
        m_highAvailabilityHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.Spec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spec = value["Spec"].GetInt64();
        m_specHasBeenSet = true;
    }

    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HeadSpecDTO.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HeadSpecDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_podNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podNum, allocator);
    }

    if (m_highAvailabilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighAvailability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highAvailability, allocator);
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


string HeadSpecDTO::GetName() const
{
    return m_name;
}

void HeadSpecDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool HeadSpecDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t HeadSpecDTO::GetPodCpu() const
{
    return m_podCpu;
}

void HeadSpecDTO::SetPodCpu(const int64_t& _podCpu)
{
    m_podCpu = _podCpu;
    m_podCpuHasBeenSet = true;
}

bool HeadSpecDTO::PodCpuHasBeenSet() const
{
    return m_podCpuHasBeenSet;
}

int64_t HeadSpecDTO::GetPodMem() const
{
    return m_podMem;
}

void HeadSpecDTO::SetPodMem(const int64_t& _podMem)
{
    m_podMem = _podMem;
    m_podMemHasBeenSet = true;
}

bool HeadSpecDTO::PodMemHasBeenSet() const
{
    return m_podMemHasBeenSet;
}

string HeadSpecDTO::GetGpuType() const
{
    return m_gpuType;
}

void HeadSpecDTO::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool HeadSpecDTO::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

int64_t HeadSpecDTO::GetGpuNum() const
{
    return m_gpuNum;
}

void HeadSpecDTO::SetGpuNum(const int64_t& _gpuNum)
{
    m_gpuNum = _gpuNum;
    m_gpuNumHasBeenSet = true;
}

bool HeadSpecDTO::GpuNumHasBeenSet() const
{
    return m_gpuNumHasBeenSet;
}

vector<Env> HeadSpecDTO::GetEnvs() const
{
    return m_envs;
}

void HeadSpecDTO::SetEnvs(const vector<Env>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool HeadSpecDTO::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<Label> HeadSpecDTO::GetLabels() const
{
    return m_labels;
}

void HeadSpecDTO::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool HeadSpecDTO::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Label> HeadSpecDTO::GetResourcesLabels() const
{
    return m_resourcesLabels;
}

void HeadSpecDTO::SetResourcesLabels(const vector<Label>& _resourcesLabels)
{
    m_resourcesLabels = _resourcesLabels;
    m_resourcesLabelsHasBeenSet = true;
}

bool HeadSpecDTO::ResourcesLabelsHasBeenSet() const
{
    return m_resourcesLabelsHasBeenSet;
}

int64_t HeadSpecDTO::GetPodNum() const
{
    return m_podNum;
}

void HeadSpecDTO::SetPodNum(const int64_t& _podNum)
{
    m_podNum = _podNum;
    m_podNumHasBeenSet = true;
}

bool HeadSpecDTO::PodNumHasBeenSet() const
{
    return m_podNumHasBeenSet;
}

bool HeadSpecDTO::GetHighAvailability() const
{
    return m_highAvailability;
}

void HeadSpecDTO::SetHighAvailability(const bool& _highAvailability)
{
    m_highAvailability = _highAvailability;
    m_highAvailabilityHasBeenSet = true;
}

bool HeadSpecDTO::HighAvailabilityHasBeenSet() const
{
    return m_highAvailabilityHasBeenSet;
}

string HeadSpecDTO::GetResourceType() const
{
    return m_resourceType;
}

void HeadSpecDTO::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool HeadSpecDTO::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string HeadSpecDTO::GetInstanceType() const
{
    return m_instanceType;
}

void HeadSpecDTO::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool HeadSpecDTO::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t HeadSpecDTO::GetSpec() const
{
    return m_spec;
}

void HeadSpecDTO::SetSpec(const int64_t& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool HeadSpecDTO::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string HeadSpecDTO::GetBillingItem() const
{
    return m_billingItem;
}

void HeadSpecDTO::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool HeadSpecDTO::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

