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

#include <tencentcloud/tiems/v20190416/model/ModelService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

ModelService::ModelService() :
    m_idHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_modelUriHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_gpuMemoryHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_scaleModeHasBeenSet(false),
    m_scalerHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_serveSecondsHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_exposesHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_logTopicIdHasBeenSet(false)
{
}

CoreInternalOutcome ModelService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("ModelUri") && !value["ModelUri"].IsNull())
    {
        if (!value["ModelUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.ModelUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUri = string(value["ModelUri"].GetString());
        m_modelUriHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("GpuMemory") && !value["GpuMemory"].IsNull())
    {
        if (!value["GpuMemory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.GpuMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemory = value["GpuMemory"].GetUint64();
        m_gpuMemoryHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ScaleMode") && !value["ScaleMode"].IsNull())
    {
        if (!value["ScaleMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.ScaleMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleMode = string(value["ScaleMode"].GetString());
        m_scaleModeHasBeenSet = true;
    }

    if (value.HasMember("Scaler") && !value["Scaler"].IsNull())
    {
        if (!value["Scaler"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Scaler` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scaler.Deserialize(value["Scaler"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scalerHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AccessToken") && !value["AccessToken"].IsNull())
    {
        if (!value["AccessToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.AccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessToken = string(value["AccessToken"].GetString());
        m_accessTokenHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ServeSeconds") && !value["ServeSeconds"].IsNull())
    {
        if (!value["ServeSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.ServeSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serveSeconds = value["ServeSeconds"].GetUint64();
        m_serveSecondsHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersion") && !value["ConfigVersion"].IsNull())
    {
        if (!value["ConfigVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.ConfigVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configVersion = string(value["ConfigVersion"].GetString());
        m_configVersionHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Exposes") && !value["Exposes"].IsNull())
    {
        if (!value["Exposes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelService.Exposes` is not array type"));

        const rapidjson::Value &tmpValue = value["Exposes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExposeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exposes.push_back(item);
        }
        m_exposesHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("LogTopicId") && !value["LogTopicId"].IsNull())
    {
        if (!value["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelService.LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(value["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelUri.c_str(), allocator).Move(), allocator);
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

    if (m_gpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpu, allocator);
    }

    if (m_gpuMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemory, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scaleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_scalerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scaler.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_serveSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServeSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serveSeconds, allocator);
    }

    if (m_configVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_exposesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exposes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exposes.begin(); itr != m_exposes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

}


string ModelService::GetId() const
{
    return m_id;
}

void ModelService::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModelService::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModelService::GetCluster() const
{
    return m_cluster;
}

void ModelService::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool ModelService::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string ModelService::GetName() const
{
    return m_name;
}

void ModelService::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModelService::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModelService::GetRuntime() const
{
    return m_runtime;
}

void ModelService::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool ModelService::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string ModelService::GetModelUri() const
{
    return m_modelUri;
}

void ModelService::SetModelUri(const string& _modelUri)
{
    m_modelUri = _modelUri;
    m_modelUriHasBeenSet = true;
}

bool ModelService::ModelUriHasBeenSet() const
{
    return m_modelUriHasBeenSet;
}

uint64_t ModelService::GetCpu() const
{
    return m_cpu;
}

void ModelService::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ModelService::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t ModelService::GetMemory() const
{
    return m_memory;
}

void ModelService::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ModelService::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t ModelService::GetGpu() const
{
    return m_gpu;
}

void ModelService::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool ModelService::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

uint64_t ModelService::GetGpuMemory() const
{
    return m_gpuMemory;
}

void ModelService::SetGpuMemory(const uint64_t& _gpuMemory)
{
    m_gpuMemory = _gpuMemory;
    m_gpuMemoryHasBeenSet = true;
}

bool ModelService::GpuMemoryHasBeenSet() const
{
    return m_gpuMemoryHasBeenSet;
}

string ModelService::GetCreateTime() const
{
    return m_createTime;
}

void ModelService::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ModelService::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ModelService::GetUpdateTime() const
{
    return m_updateTime;
}

void ModelService::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ModelService::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ModelService::GetScaleMode() const
{
    return m_scaleMode;
}

void ModelService::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool ModelService::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

Scaler ModelService::GetScaler() const
{
    return m_scaler;
}

void ModelService::SetScaler(const Scaler& _scaler)
{
    m_scaler = _scaler;
    m_scalerHasBeenSet = true;
}

bool ModelService::ScalerHasBeenSet() const
{
    return m_scalerHasBeenSet;
}

ServiceStatus ModelService::GetStatus() const
{
    return m_status;
}

void ModelService::SetStatus(const ServiceStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModelService::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModelService::GetAccessToken() const
{
    return m_accessToken;
}

void ModelService::SetAccessToken(const string& _accessToken)
{
    m_accessToken = _accessToken;
    m_accessTokenHasBeenSet = true;
}

bool ModelService::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

string ModelService::GetConfigId() const
{
    return m_configId;
}

void ModelService::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool ModelService::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string ModelService::GetConfigName() const
{
    return m_configName;
}

void ModelService::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool ModelService::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

uint64_t ModelService::GetServeSeconds() const
{
    return m_serveSeconds;
}

void ModelService::SetServeSeconds(const uint64_t& _serveSeconds)
{
    m_serveSeconds = _serveSeconds;
    m_serveSecondsHasBeenSet = true;
}

bool ModelService::ServeSecondsHasBeenSet() const
{
    return m_serveSecondsHasBeenSet;
}

string ModelService::GetConfigVersion() const
{
    return m_configVersion;
}

void ModelService::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool ModelService::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string ModelService::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void ModelService::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool ModelService::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

vector<ExposeInfo> ModelService::GetExposes() const
{
    return m_exposes;
}

void ModelService::SetExposes(const vector<ExposeInfo>& _exposes)
{
    m_exposes = _exposes;
    m_exposesHasBeenSet = true;
}

bool ModelService::ExposesHasBeenSet() const
{
    return m_exposesHasBeenSet;
}

string ModelService::GetRegion() const
{
    return m_region;
}

void ModelService::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ModelService::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ModelService::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void ModelService::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool ModelService::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string ModelService::GetDescription() const
{
    return m_description;
}

void ModelService::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModelService::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModelService::GetGpuType() const
{
    return m_gpuType;
}

void ModelService::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool ModelService::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

string ModelService::GetLogTopicId() const
{
    return m_logTopicId;
}

void ModelService::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool ModelService::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

