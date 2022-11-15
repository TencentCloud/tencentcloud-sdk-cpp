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

#include <tencentcloud/eis/v20210601/model/RuntimeMC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

RuntimeMC::RuntimeMC() :
    m_runtimeIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_workerSizeHasBeenSet(false),
    m_workerReplicaHasBeenSet(false),
    m_runningInstanceCountHasBeenSet(false),
    m_cpuUsedHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memoryUsedHasBeenSet(false),
    m_memoryLimitHasBeenSet(false),
    m_expiredAtHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_resourceLimitTypeHasBeenSet(false),
    m_autoRenewalHasBeenSet(false),
    m_workerExtensionsHasBeenSet(false),
    m_runtimeTypeHasBeenSet(false),
    m_runtimeClassHasBeenSet(false),
    m_bandwidthOutUsedHasBeenSet(false),
    m_bandwidthOutLimitHasBeenSet(false)
{
}

CoreInternalOutcome RuntimeMC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuntimeId") && !value["RuntimeId"].IsNull())
    {
        if (!value["RuntimeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.RuntimeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeId = value["RuntimeId"].GetInt64();
        m_runtimeIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.UpdatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = value["UpdatedAt"].GetInt64();
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("WorkerSize") && !value["WorkerSize"].IsNull())
    {
        if (!value["WorkerSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.WorkerSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workerSize = value["WorkerSize"].GetInt64();
        m_workerSizeHasBeenSet = true;
    }

    if (value.HasMember("WorkerReplica") && !value["WorkerReplica"].IsNull())
    {
        if (!value["WorkerReplica"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.WorkerReplica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workerReplica = value["WorkerReplica"].GetInt64();
        m_workerReplicaHasBeenSet = true;
    }

    if (value.HasMember("RunningInstanceCount") && !value["RunningInstanceCount"].IsNull())
    {
        if (!value["RunningInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.RunningInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningInstanceCount = value["RunningInstanceCount"].GetInt64();
        m_runningInstanceCountHasBeenSet = true;
    }

    if (value.HasMember("CpuUsed") && !value["CpuUsed"].IsNull())
    {
        if (!value["CpuUsed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.CpuUsed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuUsed = value["CpuUsed"].GetDouble();
        m_cpuUsedHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.CpuLimit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = value["CpuLimit"].GetDouble();
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsed") && !value["MemoryUsed"].IsNull())
    {
        if (!value["MemoryUsed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.MemoryUsed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsed = value["MemoryUsed"].GetDouble();
        m_memoryUsedHasBeenSet = true;
    }

    if (value.HasMember("MemoryLimit") && !value["MemoryLimit"].IsNull())
    {
        if (!value["MemoryLimit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.MemoryLimit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLimit = value["MemoryLimit"].GetDouble();
        m_memoryLimitHasBeenSet = true;
    }

    if (value.HasMember("ExpiredAt") && !value["ExpiredAt"].IsNull())
    {
        if (!value["ExpiredAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.ExpiredAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredAt = value["ExpiredAt"].GetInt64();
        m_expiredAtHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.ChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetInt64();
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceLimitType") && !value["ResourceLimitType"].IsNull())
    {
        if (!value["ResourceLimitType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.ResourceLimitType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceLimitType = value["ResourceLimitType"].GetInt64();
        m_resourceLimitTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewal") && !value["AutoRenewal"].IsNull())
    {
        if (!value["AutoRenewal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.AutoRenewal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewal = value["AutoRenewal"].GetBool();
        m_autoRenewalHasBeenSet = true;
    }

    if (value.HasMember("WorkerExtensions") && !value["WorkerExtensions"].IsNull())
    {
        if (!value["WorkerExtensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.WorkerExtensions` is not array type"));

        const rapidjson::Value &tmpValue = value["WorkerExtensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuntimeExtensionMC item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workerExtensions.push_back(item);
        }
        m_workerExtensionsHasBeenSet = true;
    }

    if (value.HasMember("RuntimeType") && !value["RuntimeType"].IsNull())
    {
        if (!value["RuntimeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.RuntimeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeType = value["RuntimeType"].GetInt64();
        m_runtimeTypeHasBeenSet = true;
    }

    if (value.HasMember("RuntimeClass") && !value["RuntimeClass"].IsNull())
    {
        if (!value["RuntimeClass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.RuntimeClass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runtimeClass = value["RuntimeClass"].GetInt64();
        m_runtimeClassHasBeenSet = true;
    }

    if (value.HasMember("BandwidthOutUsed") && !value["BandwidthOutUsed"].IsNull())
    {
        if (!value["BandwidthOutUsed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.BandwidthOutUsed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthOutUsed = value["BandwidthOutUsed"].GetDouble();
        m_bandwidthOutUsedHasBeenSet = true;
    }

    if (value.HasMember("BandwidthOutLimit") && !value["BandwidthOutLimit"].IsNull())
    {
        if (!value["BandwidthOutLimit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeMC.BandwidthOutLimit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidthOutLimit = value["BandwidthOutLimit"].GetDouble();
        m_bandwidthOutLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuntimeMC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runtimeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedAt, allocator);
    }

    if (m_workerSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerSize, allocator);
    }

    if (m_workerReplicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerReplica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerReplica, allocator);
    }

    if (m_runningInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningInstanceCount, allocator);
    }

    if (m_cpuUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuUsed, allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuLimit, allocator);
    }

    if (m_memoryUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsed, allocator);
    }

    if (m_memoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryLimit, allocator);
    }

    if (m_expiredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredAt, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

    if (m_resourceLimitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceLimitType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceLimitType, allocator);
    }

    if (m_autoRenewalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewal, allocator);
    }

    if (m_workerExtensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerExtensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workerExtensions.begin(); itr != m_workerExtensions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runtimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeType, allocator);
    }

    if (m_runtimeClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuntimeClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runtimeClass, allocator);
    }

    if (m_bandwidthOutUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthOutUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthOutUsed, allocator);
    }

    if (m_bandwidthOutLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthOutLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidthOutLimit, allocator);
    }

}


int64_t RuntimeMC::GetRuntimeId() const
{
    return m_runtimeId;
}

void RuntimeMC::SetRuntimeId(const int64_t& _runtimeId)
{
    m_runtimeId = _runtimeId;
    m_runtimeIdHasBeenSet = true;
}

bool RuntimeMC::RuntimeIdHasBeenSet() const
{
    return m_runtimeIdHasBeenSet;
}

string RuntimeMC::GetUin() const
{
    return m_uin;
}

void RuntimeMC::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RuntimeMC::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RuntimeMC::GetDisplayName() const
{
    return m_displayName;
}

void RuntimeMC::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool RuntimeMC::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string RuntimeMC::GetZone() const
{
    return m_zone;
}

void RuntimeMC::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool RuntimeMC::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t RuntimeMC::GetType() const
{
    return m_type;
}

void RuntimeMC::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuntimeMC::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RuntimeMC::GetStatus() const
{
    return m_status;
}

void RuntimeMC::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RuntimeMC::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RuntimeMC::GetCreatedAt() const
{
    return m_createdAt;
}

void RuntimeMC::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool RuntimeMC::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t RuntimeMC::GetUpdatedAt() const
{
    return m_updatedAt;
}

void RuntimeMC::SetUpdatedAt(const int64_t& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool RuntimeMC::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

int64_t RuntimeMC::GetWorkerSize() const
{
    return m_workerSize;
}

void RuntimeMC::SetWorkerSize(const int64_t& _workerSize)
{
    m_workerSize = _workerSize;
    m_workerSizeHasBeenSet = true;
}

bool RuntimeMC::WorkerSizeHasBeenSet() const
{
    return m_workerSizeHasBeenSet;
}

int64_t RuntimeMC::GetWorkerReplica() const
{
    return m_workerReplica;
}

void RuntimeMC::SetWorkerReplica(const int64_t& _workerReplica)
{
    m_workerReplica = _workerReplica;
    m_workerReplicaHasBeenSet = true;
}

bool RuntimeMC::WorkerReplicaHasBeenSet() const
{
    return m_workerReplicaHasBeenSet;
}

int64_t RuntimeMC::GetRunningInstanceCount() const
{
    return m_runningInstanceCount;
}

void RuntimeMC::SetRunningInstanceCount(const int64_t& _runningInstanceCount)
{
    m_runningInstanceCount = _runningInstanceCount;
    m_runningInstanceCountHasBeenSet = true;
}

bool RuntimeMC::RunningInstanceCountHasBeenSet() const
{
    return m_runningInstanceCountHasBeenSet;
}

double RuntimeMC::GetCpuUsed() const
{
    return m_cpuUsed;
}

void RuntimeMC::SetCpuUsed(const double& _cpuUsed)
{
    m_cpuUsed = _cpuUsed;
    m_cpuUsedHasBeenSet = true;
}

bool RuntimeMC::CpuUsedHasBeenSet() const
{
    return m_cpuUsedHasBeenSet;
}

double RuntimeMC::GetCpuLimit() const
{
    return m_cpuLimit;
}

void RuntimeMC::SetCpuLimit(const double& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool RuntimeMC::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

double RuntimeMC::GetMemoryUsed() const
{
    return m_memoryUsed;
}

void RuntimeMC::SetMemoryUsed(const double& _memoryUsed)
{
    m_memoryUsed = _memoryUsed;
    m_memoryUsedHasBeenSet = true;
}

bool RuntimeMC::MemoryUsedHasBeenSet() const
{
    return m_memoryUsedHasBeenSet;
}

double RuntimeMC::GetMemoryLimit() const
{
    return m_memoryLimit;
}

void RuntimeMC::SetMemoryLimit(const double& _memoryLimit)
{
    m_memoryLimit = _memoryLimit;
    m_memoryLimitHasBeenSet = true;
}

bool RuntimeMC::MemoryLimitHasBeenSet() const
{
    return m_memoryLimitHasBeenSet;
}

int64_t RuntimeMC::GetExpiredAt() const
{
    return m_expiredAt;
}

void RuntimeMC::SetExpiredAt(const int64_t& _expiredAt)
{
    m_expiredAt = _expiredAt;
    m_expiredAtHasBeenSet = true;
}

bool RuntimeMC::ExpiredAtHasBeenSet() const
{
    return m_expiredAtHasBeenSet;
}

int64_t RuntimeMC::GetChargeType() const
{
    return m_chargeType;
}

void RuntimeMC::SetChargeType(const int64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool RuntimeMC::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

int64_t RuntimeMC::GetResourceLimitType() const
{
    return m_resourceLimitType;
}

void RuntimeMC::SetResourceLimitType(const int64_t& _resourceLimitType)
{
    m_resourceLimitType = _resourceLimitType;
    m_resourceLimitTypeHasBeenSet = true;
}

bool RuntimeMC::ResourceLimitTypeHasBeenSet() const
{
    return m_resourceLimitTypeHasBeenSet;
}

bool RuntimeMC::GetAutoRenewal() const
{
    return m_autoRenewal;
}

void RuntimeMC::SetAutoRenewal(const bool& _autoRenewal)
{
    m_autoRenewal = _autoRenewal;
    m_autoRenewalHasBeenSet = true;
}

bool RuntimeMC::AutoRenewalHasBeenSet() const
{
    return m_autoRenewalHasBeenSet;
}

vector<RuntimeExtensionMC> RuntimeMC::GetWorkerExtensions() const
{
    return m_workerExtensions;
}

void RuntimeMC::SetWorkerExtensions(const vector<RuntimeExtensionMC>& _workerExtensions)
{
    m_workerExtensions = _workerExtensions;
    m_workerExtensionsHasBeenSet = true;
}

bool RuntimeMC::WorkerExtensionsHasBeenSet() const
{
    return m_workerExtensionsHasBeenSet;
}

int64_t RuntimeMC::GetRuntimeType() const
{
    return m_runtimeType;
}

void RuntimeMC::SetRuntimeType(const int64_t& _runtimeType)
{
    m_runtimeType = _runtimeType;
    m_runtimeTypeHasBeenSet = true;
}

bool RuntimeMC::RuntimeTypeHasBeenSet() const
{
    return m_runtimeTypeHasBeenSet;
}

int64_t RuntimeMC::GetRuntimeClass() const
{
    return m_runtimeClass;
}

void RuntimeMC::SetRuntimeClass(const int64_t& _runtimeClass)
{
    m_runtimeClass = _runtimeClass;
    m_runtimeClassHasBeenSet = true;
}

bool RuntimeMC::RuntimeClassHasBeenSet() const
{
    return m_runtimeClassHasBeenSet;
}

double RuntimeMC::GetBandwidthOutUsed() const
{
    return m_bandwidthOutUsed;
}

void RuntimeMC::SetBandwidthOutUsed(const double& _bandwidthOutUsed)
{
    m_bandwidthOutUsed = _bandwidthOutUsed;
    m_bandwidthOutUsedHasBeenSet = true;
}

bool RuntimeMC::BandwidthOutUsedHasBeenSet() const
{
    return m_bandwidthOutUsedHasBeenSet;
}

double RuntimeMC::GetBandwidthOutLimit() const
{
    return m_bandwidthOutLimit;
}

void RuntimeMC::SetBandwidthOutLimit(const double& _bandwidthOutLimit)
{
    m_bandwidthOutLimit = _bandwidthOutLimit;
    m_bandwidthOutLimitHasBeenSet = true;
}

bool RuntimeMC::BandwidthOutLimitHasBeenSet() const
{
    return m_bandwidthOutLimitHasBeenSet;
}

