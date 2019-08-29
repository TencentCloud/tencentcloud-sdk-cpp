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

#include <tencentcloud/tiems/v20190416/model/Service.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

Service::Service() :
    m_idHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_modelUriHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_tflopUnitsHasBeenSet(false),
    m_gpuMemoryHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_scaleModeHasBeenSet(false),
    m_scalerHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_servingIpHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_serviceConfigIdHasBeenSet(false),
    m_serviceConfigNameHasBeenSet(false),
    m_serveSecondsHasBeenSet(false),
    m_serviceConfigVersionHasBeenSet(false)
{
}

CoreInternalOutcome Service::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Service.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("ModelUri") && !value["ModelUri"].IsNull())
    {
        if (!value["ModelUri"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ModelUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelUri = string(value["ModelUri"].GetString());
        m_modelUriHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Service.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Service.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("TflopUnits") && !value["TflopUnits"].IsNull())
    {
        if (!value["TflopUnits"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Service.TflopUnits` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tflopUnits = value["TflopUnits"].GetUint64();
        m_tflopUnitsHasBeenSet = true;
    }

    if (value.HasMember("GpuMemory") && !value["GpuMemory"].IsNull())
    {
        if (!value["GpuMemory"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Service.GpuMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemory = value["GpuMemory"].GetUint64();
        m_gpuMemoryHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ScaleMode") && !value["ScaleMode"].IsNull())
    {
        if (!value["ScaleMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ScaleMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scaleMode = string(value["ScaleMode"].GetString());
        m_scaleModeHasBeenSet = true;
    }

    if (value.HasMember("Scaler") && !value["Scaler"].IsNull())
    {
        if (!value["Scaler"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Service.Scaler` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `Service.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ServingIp") && !value["ServingIp"].IsNull())
    {
        if (!value["ServingIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ServingIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servingIp = string(value["ServingIp"].GetString());
        m_servingIpHasBeenSet = true;
    }

    if (value.HasMember("AccessToken") && !value["AccessToken"].IsNull())
    {
        if (!value["AccessToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.AccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessToken = string(value["AccessToken"].GetString());
        m_accessTokenHasBeenSet = true;
    }

    if (value.HasMember("ServiceConfigId") && !value["ServiceConfigId"].IsNull())
    {
        if (!value["ServiceConfigId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Service.ServiceConfigId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceConfigId = value["ServiceConfigId"].GetInt64();
        m_serviceConfigIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceConfigName") && !value["ServiceConfigName"].IsNull())
    {
        if (!value["ServiceConfigName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ServiceConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceConfigName = string(value["ServiceConfigName"].GetString());
        m_serviceConfigNameHasBeenSet = true;
    }

    if (value.HasMember("ServeSeconds") && !value["ServeSeconds"].IsNull())
    {
        if (!value["ServeSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Service.ServeSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serveSeconds = value["ServeSeconds"].GetUint64();
        m_serveSecondsHasBeenSet = true;
    }

    if (value.HasMember("ServiceConfigVersion") && !value["ServiceConfigVersion"].IsNull())
    {
        if (!value["ServiceConfigVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Service.ServiceConfigVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceConfigVersion = string(value["ServiceConfigVersion"].GetString());
        m_serviceConfigVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Service::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_clusterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_modelUriHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ModelUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_modelUri.c_str(), allocator).Move(), allocator);
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

    if (m_tflopUnitsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TflopUnits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tflopUnits, allocator);
    }

    if (m_gpuMemoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GpuMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemory, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scaleModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scaleMode.c_str(), allocator).Move(), allocator);
    }

    if (m_scalerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scaler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_scaler.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_servingIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServingIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_servingIp.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceConfigId, allocator);
    }

    if (m_serviceConfigNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceConfigName.c_str(), allocator).Move(), allocator);
    }

    if (m_serveSecondsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServeSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serveSeconds, allocator);
    }

    if (m_serviceConfigVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceConfigVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceConfigVersion.c_str(), allocator).Move(), allocator);
    }

}


int64_t Service::GetId() const
{
    return m_id;
}

void Service::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Service::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Service::GetCluster() const
{
    return m_cluster;
}

void Service::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool Service::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string Service::GetName() const
{
    return m_name;
}

void Service::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Service::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Service::GetRuntime() const
{
    return m_runtime;
}

void Service::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool Service::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string Service::GetModelUri() const
{
    return m_modelUri;
}

void Service::SetModelUri(const string& _modelUri)
{
    m_modelUri = _modelUri;
    m_modelUriHasBeenSet = true;
}

bool Service::ModelUriHasBeenSet() const
{
    return m_modelUriHasBeenSet;
}

uint64_t Service::GetCpu() const
{
    return m_cpu;
}

void Service::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool Service::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t Service::GetMemory() const
{
    return m_memory;
}

void Service::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Service::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t Service::GetTflopUnits() const
{
    return m_tflopUnits;
}

void Service::SetTflopUnits(const uint64_t& _tflopUnits)
{
    m_tflopUnits = _tflopUnits;
    m_tflopUnitsHasBeenSet = true;
}

bool Service::TflopUnitsHasBeenSet() const
{
    return m_tflopUnitsHasBeenSet;
}

uint64_t Service::GetGpuMemory() const
{
    return m_gpuMemory;
}

void Service::SetGpuMemory(const uint64_t& _gpuMemory)
{
    m_gpuMemory = _gpuMemory;
    m_gpuMemoryHasBeenSet = true;
}

bool Service::GpuMemoryHasBeenSet() const
{
    return m_gpuMemoryHasBeenSet;
}

string Service::GetCreateTime() const
{
    return m_createTime;
}

void Service::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Service::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Service::GetUpdateTime() const
{
    return m_updateTime;
}

void Service::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Service::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Service::GetScaleMode() const
{
    return m_scaleMode;
}

void Service::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool Service::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}

Scaler Service::GetScaler() const
{
    return m_scaler;
}

void Service::SetScaler(const Scaler& _scaler)
{
    m_scaler = _scaler;
    m_scalerHasBeenSet = true;
}

bool Service::ScalerHasBeenSet() const
{
    return m_scalerHasBeenSet;
}

ServiceStatus Service::GetStatus() const
{
    return m_status;
}

void Service::SetStatus(const ServiceStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Service::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Service::GetServingIp() const
{
    return m_servingIp;
}

void Service::SetServingIp(const string& _servingIp)
{
    m_servingIp = _servingIp;
    m_servingIpHasBeenSet = true;
}

bool Service::ServingIpHasBeenSet() const
{
    return m_servingIpHasBeenSet;
}

string Service::GetAccessToken() const
{
    return m_accessToken;
}

void Service::SetAccessToken(const string& _accessToken)
{
    m_accessToken = _accessToken;
    m_accessTokenHasBeenSet = true;
}

bool Service::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

int64_t Service::GetServiceConfigId() const
{
    return m_serviceConfigId;
}

void Service::SetServiceConfigId(const int64_t& _serviceConfigId)
{
    m_serviceConfigId = _serviceConfigId;
    m_serviceConfigIdHasBeenSet = true;
}

bool Service::ServiceConfigIdHasBeenSet() const
{
    return m_serviceConfigIdHasBeenSet;
}

string Service::GetServiceConfigName() const
{
    return m_serviceConfigName;
}

void Service::SetServiceConfigName(const string& _serviceConfigName)
{
    m_serviceConfigName = _serviceConfigName;
    m_serviceConfigNameHasBeenSet = true;
}

bool Service::ServiceConfigNameHasBeenSet() const
{
    return m_serviceConfigNameHasBeenSet;
}

uint64_t Service::GetServeSeconds() const
{
    return m_serveSeconds;
}

void Service::SetServeSeconds(const uint64_t& _serveSeconds)
{
    m_serveSeconds = _serveSeconds;
    m_serveSecondsHasBeenSet = true;
}

bool Service::ServeSecondsHasBeenSet() const
{
    return m_serveSecondsHasBeenSet;
}

string Service::GetServiceConfigVersion() const
{
    return m_serviceConfigVersion;
}

void Service::SetServiceConfigVersion(const string& _serviceConfigVersion)
{
    m_serviceConfigVersion = _serviceConfigVersion;
    m_serviceConfigVersionHasBeenSet = true;
}

bool Service::ServiceConfigVersionHasBeenSet() const
{
    return m_serviceConfigVersionHasBeenSet;
}

