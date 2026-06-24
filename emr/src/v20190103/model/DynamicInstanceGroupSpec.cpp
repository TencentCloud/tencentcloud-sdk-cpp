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

#include <tencentcloud/emr/v20190103/model/DynamicInstanceGroupSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DynamicInstanceGroupSpec::DynamicInstanceGroupSpec() :
    m_nameHasBeenSet(false),
    m_podCountHasBeenSet(false),
    m_minNodesHasBeenSet(false),
    m_maxNodesHasBeenSet(false),
    m_storageConfigEnabledHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_resourceLabelsHasBeenSet(false),
    m_envHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_tolerationsHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_persistentVolumeHasBeenSet(false),
    m_preStartCommandHasBeenSet(false),
    m_rayStartParamsHasBeenSet(false)
{
}

CoreInternalOutcome DynamicInstanceGroupSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PodCount") && !value["PodCount"].IsNull())
    {
        if (!value["PodCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.PodCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podCount = value["PodCount"].GetInt64();
        m_podCountHasBeenSet = true;
    }

    if (value.HasMember("MinNodes") && !value["MinNodes"].IsNull())
    {
        if (!value["MinNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.MinNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minNodes = value["MinNodes"].GetInt64();
        m_minNodesHasBeenSet = true;
    }

    if (value.HasMember("MaxNodes") && !value["MaxNodes"].IsNull())
    {
        if (!value["MaxNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.MaxNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodes = value["MaxNodes"].GetInt64();
        m_maxNodesHasBeenSet = true;
    }

    if (value.HasMember("StorageConfigEnabled") && !value["StorageConfigEnabled"].IsNull())
    {
        if (!value["StorageConfigEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.StorageConfigEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_storageConfigEnabled = value["StorageConfigEnabled"].GetBool();
        m_storageConfigEnabledHasBeenSet = true;
    }

    if (value.HasMember("GroupType") && !value["GroupType"].IsNull())
    {
        if (!value["GroupType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.GroupType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupType = string(value["GroupType"].GetString());
        m_groupTypeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.MemSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetInt64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.Gpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetInt64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("ResourceLabels") && !value["ResourceLabels"].IsNull())
    {
        if (!value["ResourceLabels"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.ResourceLabels` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceLabels = string(value["ResourceLabels"].GetString());
        m_resourceLabelsHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.Env` is not array type"));

        const rapidjson::Value &tmpValue = value["Env"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_env.push_back(item);
        }
        m_envHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NameValue item;
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

    if (value.HasMember("Tolerations") && !value["Tolerations"].IsNull())
    {
        if (!value["Tolerations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.Tolerations` is not array type"));

        const rapidjson::Value &tmpValue = value["Tolerations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Toleration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tolerations.push_back(item);
        }
        m_tolerationsHasBeenSet = true;
    }

    if (value.HasMember("Scheduler") && !value["Scheduler"].IsNull())
    {
        if (!value["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(value["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }

    if (value.HasMember("PersistentVolume") && !value["PersistentVolume"].IsNull())
    {
        if (!value["PersistentVolume"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.PersistentVolume` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_persistentVolume.Deserialize(value["PersistentVolume"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_persistentVolumeHasBeenSet = true;
    }

    if (value.HasMember("PreStartCommand") && !value["PreStartCommand"].IsNull())
    {
        if (!value["PreStartCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.PreStartCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preStartCommand = string(value["PreStartCommand"].GetString());
        m_preStartCommandHasBeenSet = true;
    }

    if (value.HasMember("RayStartParams") && !value["RayStartParams"].IsNull())
    {
        if (!value["RayStartParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicInstanceGroupSpec.RayStartParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rayStartParams = string(value["RayStartParams"].GetString());
        m_rayStartParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicInstanceGroupSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_podCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCount, allocator);
    }

    if (m_minNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNodes, allocator);
    }

    if (m_maxNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodes, allocator);
    }

    if (m_storageConfigEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageConfigEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageConfigEnabled, allocator);
    }

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_resourceLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceLabels.c_str(), allocator).Move(), allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_env.begin(); itr != m_env.end(); ++itr, ++i)
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

    if (m_tolerationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tolerations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tolerations.begin(); itr != m_tolerations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_persistentVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersistentVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_persistentVolume.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_preStartCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreStartCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preStartCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_rayStartParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RayStartParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rayStartParams.c_str(), allocator).Move(), allocator);
    }

}


string DynamicInstanceGroupSpec::GetName() const
{
    return m_name;
}

void DynamicInstanceGroupSpec::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DynamicInstanceGroupSpec::GetPodCount() const
{
    return m_podCount;
}

void DynamicInstanceGroupSpec::SetPodCount(const int64_t& _podCount)
{
    m_podCount = _podCount;
    m_podCountHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::PodCountHasBeenSet() const
{
    return m_podCountHasBeenSet;
}

int64_t DynamicInstanceGroupSpec::GetMinNodes() const
{
    return m_minNodes;
}

void DynamicInstanceGroupSpec::SetMinNodes(const int64_t& _minNodes)
{
    m_minNodes = _minNodes;
    m_minNodesHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::MinNodesHasBeenSet() const
{
    return m_minNodesHasBeenSet;
}

int64_t DynamicInstanceGroupSpec::GetMaxNodes() const
{
    return m_maxNodes;
}

void DynamicInstanceGroupSpec::SetMaxNodes(const int64_t& _maxNodes)
{
    m_maxNodes = _maxNodes;
    m_maxNodesHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::MaxNodesHasBeenSet() const
{
    return m_maxNodesHasBeenSet;
}

bool DynamicInstanceGroupSpec::GetStorageConfigEnabled() const
{
    return m_storageConfigEnabled;
}

void DynamicInstanceGroupSpec::SetStorageConfigEnabled(const bool& _storageConfigEnabled)
{
    m_storageConfigEnabled = _storageConfigEnabled;
    m_storageConfigEnabledHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::StorageConfigEnabledHasBeenSet() const
{
    return m_storageConfigEnabledHasBeenSet;
}

string DynamicInstanceGroupSpec::GetGroupType() const
{
    return m_groupType;
}

void DynamicInstanceGroupSpec::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

int64_t DynamicInstanceGroupSpec::GetCpu() const
{
    return m_cpu;
}

void DynamicInstanceGroupSpec::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DynamicInstanceGroupSpec::GetMemSize() const
{
    return m_memSize;
}

void DynamicInstanceGroupSpec::SetMemSize(const int64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

string DynamicInstanceGroupSpec::GetGpuType() const
{
    return m_gpuType;
}

void DynamicInstanceGroupSpec::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

int64_t DynamicInstanceGroupSpec::GetGpu() const
{
    return m_gpu;
}

void DynamicInstanceGroupSpec::SetGpu(const int64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

string DynamicInstanceGroupSpec::GetResourceLabels() const
{
    return m_resourceLabels;
}

void DynamicInstanceGroupSpec::SetResourceLabels(const string& _resourceLabels)
{
    m_resourceLabels = _resourceLabels;
    m_resourceLabelsHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::ResourceLabelsHasBeenSet() const
{
    return m_resourceLabelsHasBeenSet;
}

vector<NameValue> DynamicInstanceGroupSpec::GetEnv() const
{
    return m_env;
}

void DynamicInstanceGroupSpec::SetEnv(const vector<NameValue>& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

vector<NameValue> DynamicInstanceGroupSpec::GetLabels() const
{
    return m_labels;
}

void DynamicInstanceGroupSpec::SetLabels(const vector<NameValue>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Toleration> DynamicInstanceGroupSpec::GetTolerations() const
{
    return m_tolerations;
}

void DynamicInstanceGroupSpec::SetTolerations(const vector<Toleration>& _tolerations)
{
    m_tolerations = _tolerations;
    m_tolerationsHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::TolerationsHasBeenSet() const
{
    return m_tolerationsHasBeenSet;
}

string DynamicInstanceGroupSpec::GetScheduler() const
{
    return m_scheduler;
}

void DynamicInstanceGroupSpec::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

PersistentVolume DynamicInstanceGroupSpec::GetPersistentVolume() const
{
    return m_persistentVolume;
}

void DynamicInstanceGroupSpec::SetPersistentVolume(const PersistentVolume& _persistentVolume)
{
    m_persistentVolume = _persistentVolume;
    m_persistentVolumeHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::PersistentVolumeHasBeenSet() const
{
    return m_persistentVolumeHasBeenSet;
}

string DynamicInstanceGroupSpec::GetPreStartCommand() const
{
    return m_preStartCommand;
}

void DynamicInstanceGroupSpec::SetPreStartCommand(const string& _preStartCommand)
{
    m_preStartCommand = _preStartCommand;
    m_preStartCommandHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::PreStartCommandHasBeenSet() const
{
    return m_preStartCommandHasBeenSet;
}

string DynamicInstanceGroupSpec::GetRayStartParams() const
{
    return m_rayStartParams;
}

void DynamicInstanceGroupSpec::SetRayStartParams(const string& _rayStartParams)
{
    m_rayStartParams = _rayStartParams;
    m_rayStartParamsHasBeenSet = true;
}

bool DynamicInstanceGroupSpec::RayStartParamsHasBeenSet() const
{
    return m_rayStartParamsHasBeenSet;
}

