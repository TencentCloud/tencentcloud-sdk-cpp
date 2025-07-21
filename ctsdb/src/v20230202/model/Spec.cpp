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

#include <tencentcloud/ctsdb/v20230202/model/Spec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctsdb::V20230202::Model;
using namespace std;

Spec::Spec() :
    m_payModeHasBeenSet(false),
    m_requestUnitHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memoryLimitHasBeenSet(false),
    m_diskLimitHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_replicasHasBeenSet(false)
{
}

CoreInternalOutcome Spec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Spec.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("RequestUnit") && !value["RequestUnit"].IsNull())
    {
        if (!value["RequestUnit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Spec.RequestUnit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestUnit = value["RequestUnit"].GetUint64();
        m_requestUnitHasBeenSet = true;
    }

    if (value.HasMember("CpuLimit") && !value["CpuLimit"].IsNull())
    {
        if (!value["CpuLimit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Spec.CpuLimit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLimit = value["CpuLimit"].GetDouble();
        m_cpuLimitHasBeenSet = true;
    }

    if (value.HasMember("MemoryLimit") && !value["MemoryLimit"].IsNull())
    {
        if (!value["MemoryLimit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Spec.MemoryLimit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLimit = value["MemoryLimit"].GetDouble();
        m_memoryLimitHasBeenSet = true;
    }

    if (value.HasMember("DiskLimit") && !value["DiskLimit"].IsNull())
    {
        if (!value["DiskLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Spec.DiskLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskLimit = value["DiskLimit"].GetUint64();
        m_diskLimitHasBeenSet = true;
    }

    if (value.HasMember("Shards") && !value["Shards"].IsNull())
    {
        if (!value["Shards"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Spec.Shards` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shards = value["Shards"].GetUint64();
        m_shardsHasBeenSet = true;
    }

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Spec.Replicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetUint64();
        m_replicasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Spec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_requestUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestUnit, allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuLimit, allocator);
    }

    if (m_memoryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryLimit, allocator);
    }

    if (m_diskLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskLimit, allocator);
    }

    if (m_shardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shards, allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

}


uint64_t Spec::GetPayMode() const
{
    return m_payMode;
}

void Spec::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Spec::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t Spec::GetRequestUnit() const
{
    return m_requestUnit;
}

void Spec::SetRequestUnit(const uint64_t& _requestUnit)
{
    m_requestUnit = _requestUnit;
    m_requestUnitHasBeenSet = true;
}

bool Spec::RequestUnitHasBeenSet() const
{
    return m_requestUnitHasBeenSet;
}

double Spec::GetCpuLimit() const
{
    return m_cpuLimit;
}

void Spec::SetCpuLimit(const double& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool Spec::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

double Spec::GetMemoryLimit() const
{
    return m_memoryLimit;
}

void Spec::SetMemoryLimit(const double& _memoryLimit)
{
    m_memoryLimit = _memoryLimit;
    m_memoryLimitHasBeenSet = true;
}

bool Spec::MemoryLimitHasBeenSet() const
{
    return m_memoryLimitHasBeenSet;
}

uint64_t Spec::GetDiskLimit() const
{
    return m_diskLimit;
}

void Spec::SetDiskLimit(const uint64_t& _diskLimit)
{
    m_diskLimit = _diskLimit;
    m_diskLimitHasBeenSet = true;
}

bool Spec::DiskLimitHasBeenSet() const
{
    return m_diskLimitHasBeenSet;
}

uint64_t Spec::GetShards() const
{
    return m_shards;
}

void Spec::SetShards(const uint64_t& _shards)
{
    m_shards = _shards;
    m_shardsHasBeenSet = true;
}

bool Spec::ShardsHasBeenSet() const
{
    return m_shardsHasBeenSet;
}

uint64_t Spec::GetReplicas() const
{
    return m_replicas;
}

void Spec::SetReplicas(const uint64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool Spec::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

