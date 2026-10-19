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

#include <tencentcloud/tione/v20211111/model/SmartRouterResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SmartRouterResourceConfig::SmartRouterResourceConfig() :
    m_replicasHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_envHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_sidecarHasBeenSet(false)
{
}

CoreInternalOutcome SmartRouterResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceConfig.Replicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetUint64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceConfig.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceConfig.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Env") && !value["Env"].IsNull())
    {
        if (!value["Env"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceConfig.Env` is not array type"));

        const rapidjson::Value &tmpValue = value["Env"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvVar item;
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

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceConfig.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Sidecar") && !value["Sidecar"].IsNull())
    {
        if (!value["Sidecar"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterResourceConfig.Sidecar` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sidecar.Deserialize(value["Sidecar"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sidecarHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartRouterResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sidecarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sidecar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sidecar.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t SmartRouterResourceConfig::GetReplicas() const
{
    return m_replicas;
}

void SmartRouterResourceConfig::SetReplicas(const uint64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool SmartRouterResourceConfig::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

uint64_t SmartRouterResourceConfig::GetCpu() const
{
    return m_cpu;
}

void SmartRouterResourceConfig::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool SmartRouterResourceConfig::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t SmartRouterResourceConfig::GetMemory() const
{
    return m_memory;
}

void SmartRouterResourceConfig::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool SmartRouterResourceConfig::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

vector<EnvVar> SmartRouterResourceConfig::GetEnv() const
{
    return m_env;
}

void SmartRouterResourceConfig::SetEnv(const vector<EnvVar>& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool SmartRouterResourceConfig::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

string SmartRouterResourceConfig::GetInstanceType() const
{
    return m_instanceType;
}

void SmartRouterResourceConfig::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool SmartRouterResourceConfig::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

SidecarSpec SmartRouterResourceConfig::GetSidecar() const
{
    return m_sidecar;
}

void SmartRouterResourceConfig::SetSidecar(const SidecarSpec& _sidecar)
{
    m_sidecar = _sidecar;
    m_sidecarHasBeenSet = true;
}

bool SmartRouterResourceConfig::SidecarHasBeenSet() const
{
    return m_sidecarHasBeenSet;
}

