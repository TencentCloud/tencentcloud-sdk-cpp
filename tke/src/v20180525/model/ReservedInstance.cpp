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

#include <tencentcloud/tke/v20180525/model/ReservedInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ReservedInstance::ReservedInstance() :
    m_reservedInstanceIdHasBeenSet(false),
    m_reservedInstanceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_activeAtHasBeenSet(false),
    m_expireAtHasBeenSet(false),
    m_gpuCountHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_deductStatusHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReservedInstanceId") && !value["ReservedInstanceId"].IsNull())
    {
        if (!value["ReservedInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.ReservedInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedInstanceId = string(value["ReservedInstanceId"].GetString());
        m_reservedInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ReservedInstanceName") && !value["ReservedInstanceName"].IsNull())
    {
        if (!value["ReservedInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.ReservedInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedInstanceName = string(value["ReservedInstanceName"].GetString());
        m_reservedInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.TimeSpan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetUint64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.Cpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetDouble();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.Memory` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetDouble();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ActiveAt") && !value["ActiveAt"].IsNull())
    {
        if (!value["ActiveAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.ActiveAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeAt = string(value["ActiveAt"].GetString());
        m_activeAtHasBeenSet = true;
    }

    if (value.HasMember("ExpireAt") && !value["ExpireAt"].IsNull())
    {
        if (!value["ExpireAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.ExpireAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireAt = string(value["ExpireAt"].GetString());
        m_expireAtHasBeenSet = true;
    }

    if (value.HasMember("GpuCount") && !value["GpuCount"].IsNull())
    {
        if (!value["GpuCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.GpuCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuCount = string(value["GpuCount"].GetString());
        m_gpuCountHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("DeductStatus") && !value["DeductStatus"].IsNull())
    {
        if (!value["DeductStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstance.DeductStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductStatus = string(value["DeductStatus"].GetString());
        m_deductStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reservedInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
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

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_activeAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeAt.c_str(), allocator).Move(), allocator);
    }

    if (m_expireAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireAt.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuCount.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
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

    if (m_deductStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductStatus.c_str(), allocator).Move(), allocator);
    }

}


string ReservedInstance::GetReservedInstanceId() const
{
    return m_reservedInstanceId;
}

void ReservedInstance::SetReservedInstanceId(const string& _reservedInstanceId)
{
    m_reservedInstanceId = _reservedInstanceId;
    m_reservedInstanceIdHasBeenSet = true;
}

bool ReservedInstance::ReservedInstanceIdHasBeenSet() const
{
    return m_reservedInstanceIdHasBeenSet;
}

string ReservedInstance::GetReservedInstanceName() const
{
    return m_reservedInstanceName;
}

void ReservedInstance::SetReservedInstanceName(const string& _reservedInstanceName)
{
    m_reservedInstanceName = _reservedInstanceName;
    m_reservedInstanceNameHasBeenSet = true;
}

bool ReservedInstance::ReservedInstanceNameHasBeenSet() const
{
    return m_reservedInstanceNameHasBeenSet;
}

string ReservedInstance::GetStatus() const
{
    return m_status;
}

void ReservedInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReservedInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ReservedInstance::GetTimeSpan() const
{
    return m_timeSpan;
}

void ReservedInstance::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool ReservedInstance::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string ReservedInstance::GetResourceType() const
{
    return m_resourceType;
}

void ReservedInstance::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ReservedInstance::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

double ReservedInstance::GetCpu() const
{
    return m_cpu;
}

void ReservedInstance::SetCpu(const double& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ReservedInstance::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

double ReservedInstance::GetMemory() const
{
    return m_memory;
}

void ReservedInstance::SetMemory(const double& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ReservedInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string ReservedInstance::GetScope() const
{
    return m_scope;
}

void ReservedInstance::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ReservedInstance::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string ReservedInstance::GetCreatedAt() const
{
    return m_createdAt;
}

void ReservedInstance::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ReservedInstance::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ReservedInstance::GetActiveAt() const
{
    return m_activeAt;
}

void ReservedInstance::SetActiveAt(const string& _activeAt)
{
    m_activeAt = _activeAt;
    m_activeAtHasBeenSet = true;
}

bool ReservedInstance::ActiveAtHasBeenSet() const
{
    return m_activeAtHasBeenSet;
}

string ReservedInstance::GetExpireAt() const
{
    return m_expireAt;
}

void ReservedInstance::SetExpireAt(const string& _expireAt)
{
    m_expireAt = _expireAt;
    m_expireAtHasBeenSet = true;
}

bool ReservedInstance::ExpireAtHasBeenSet() const
{
    return m_expireAtHasBeenSet;
}

string ReservedInstance::GetGpuCount() const
{
    return m_gpuCount;
}

void ReservedInstance::SetGpuCount(const string& _gpuCount)
{
    m_gpuCount = _gpuCount;
    m_gpuCountHasBeenSet = true;
}

bool ReservedInstance::GpuCountHasBeenSet() const
{
    return m_gpuCountHasBeenSet;
}

int64_t ReservedInstance::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void ReservedInstance::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool ReservedInstance::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string ReservedInstance::GetClusterId() const
{
    return m_clusterId;
}

void ReservedInstance::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ReservedInstance::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ReservedInstance::GetNodeName() const
{
    return m_nodeName;
}

void ReservedInstance::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ReservedInstance::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ReservedInstance::GetDeductStatus() const
{
    return m_deductStatus;
}

void ReservedInstance::SetDeductStatus(const string& _deductStatus)
{
    m_deductStatus = _deductStatus;
    m_deductStatusHasBeenSet = true;
}

bool ReservedInstance::DeductStatusHasBeenSet() const
{
    return m_deductStatusHasBeenSet;
}

