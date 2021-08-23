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

#include <tencentcloud/tiems/v20190416/model/Job.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

Job::Job() :
    m_idHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_predictInputHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cancelTimeHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_gpuHasBeenSet(false),
    m_gpuMemoryHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configVersionHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_quantizationInputHasBeenSet(false),
    m_logTopicIdHasBeenSet(false)
{
}

CoreInternalOutcome Job::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("PredictInput") && !value["PredictInput"].IsNull())
    {
        if (!value["PredictInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Job.PredictInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_predictInput.Deserialize(value["PredictInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_predictInputHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CancelTime") && !value["CancelTime"].IsNull())
    {
        if (!value["CancelTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.CancelTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cancelTime = string(value["CancelTime"].GetString());
        m_cancelTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Gpu") && !value["Gpu"].IsNull())
    {
        if (!value["Gpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Gpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpu = value["Gpu"].GetUint64();
        m_gpuHasBeenSet = true;
    }

    if (value.HasMember("GpuMemory") && !value["GpuMemory"].IsNull())
    {
        if (!value["GpuMemory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.GpuMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemory = value["GpuMemory"].GetUint64();
        m_gpuMemoryHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigVersion") && !value["ConfigVersion"].IsNull())
    {
        if (!value["ConfigVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.ConfigVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configVersion = string(value["ConfigVersion"].GetString());
        m_configVersionHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.JobType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = string(value["JobType"].GetString());
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("QuantizationInput") && !value["QuantizationInput"].IsNull())
    {
        if (!value["QuantizationInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Job.QuantizationInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quantizationInput.Deserialize(value["QuantizationInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quantizationInputHasBeenSet = true;
    }

    if (value.HasMember("LogTopicId") && !value["LogTopicId"].IsNull())
    {
        if (!value["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(value["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Job::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_predictInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PredictInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_predictInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cancelTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
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

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_quantizationInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuantizationInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quantizationInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

}


string Job::GetId() const
{
    return m_id;
}

void Job::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Job::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Job::GetCluster() const
{
    return m_cluster;
}

void Job::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool Job::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string Job::GetRegion() const
{
    return m_region;
}

void Job::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Job::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Job::GetName() const
{
    return m_name;
}

void Job::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Job::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Job::GetRuntime() const
{
    return m_runtime;
}

void Job::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool Job::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string Job::GetDescription() const
{
    return m_description;
}

void Job::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Job::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Job::GetConfigId() const
{
    return m_configId;
}

void Job::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool Job::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

PredictInput Job::GetPredictInput() const
{
    return m_predictInput;
}

void Job::SetPredictInput(const PredictInput& _predictInput)
{
    m_predictInput = _predictInput;
    m_predictInputHasBeenSet = true;
}

bool Job::PredictInputHasBeenSet() const
{
    return m_predictInputHasBeenSet;
}

JobStatus Job::GetStatus() const
{
    return m_status;
}

void Job::SetStatus(const JobStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Job::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Job::GetCreateTime() const
{
    return m_createTime;
}

void Job::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Job::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Job::GetStartTime() const
{
    return m_startTime;
}

void Job::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Job::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Job::GetEndTime() const
{
    return m_endTime;
}

void Job::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Job::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Job::GetCancelTime() const
{
    return m_cancelTime;
}

void Job::SetCancelTime(const string& _cancelTime)
{
    m_cancelTime = _cancelTime;
    m_cancelTimeHasBeenSet = true;
}

bool Job::CancelTimeHasBeenSet() const
{
    return m_cancelTimeHasBeenSet;
}

string Job::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void Job::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool Job::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

uint64_t Job::GetCpu() const
{
    return m_cpu;
}

void Job::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool Job::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t Job::GetMemory() const
{
    return m_memory;
}

void Job::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Job::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t Job::GetGpu() const
{
    return m_gpu;
}

void Job::SetGpu(const uint64_t& _gpu)
{
    m_gpu = _gpu;
    m_gpuHasBeenSet = true;
}

bool Job::GpuHasBeenSet() const
{
    return m_gpuHasBeenSet;
}

uint64_t Job::GetGpuMemory() const
{
    return m_gpuMemory;
}

void Job::SetGpuMemory(const uint64_t& _gpuMemory)
{
    m_gpuMemory = _gpuMemory;
    m_gpuMemoryHasBeenSet = true;
}

bool Job::GpuMemoryHasBeenSet() const
{
    return m_gpuMemoryHasBeenSet;
}

string Job::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void Job::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool Job::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string Job::GetGpuType() const
{
    return m_gpuType;
}

void Job::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool Job::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

string Job::GetConfigName() const
{
    return m_configName;
}

void Job::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool Job::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string Job::GetConfigVersion() const
{
    return m_configVersion;
}

void Job::SetConfigVersion(const string& _configVersion)
{
    m_configVersion = _configVersion;
    m_configVersionHasBeenSet = true;
}

bool Job::ConfigVersionHasBeenSet() const
{
    return m_configVersionHasBeenSet;
}

string Job::GetJobType() const
{
    return m_jobType;
}

void Job::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool Job::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

QuantizationInput Job::GetQuantizationInput() const
{
    return m_quantizationInput;
}

void Job::SetQuantizationInput(const QuantizationInput& _quantizationInput)
{
    m_quantizationInput = _quantizationInput;
    m_quantizationInputHasBeenSet = true;
}

bool Job::QuantizationInputHasBeenSet() const
{
    return m_quantizationInputHasBeenSet;
}

string Job::GetLogTopicId() const
{
    return m_logTopicId;
}

void Job::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool Job::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

