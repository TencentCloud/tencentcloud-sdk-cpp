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

#include <tencentcloud/ags/v20250920/model/QuotaResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

QuotaResourceInfo::QuotaResourceInfo() :
    m_sandboxToolsHasBeenSet(false),
    m_sandboxInstancesHasBeenSet(false),
    m_pausedInstancesHasBeenSet(false),
    m_cPUCoresHasBeenSet(false),
    m_memoryGiBHasBeenSet(false)
{
}

CoreInternalOutcome QuotaResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SandboxTools") && !value["SandboxTools"].IsNull())
    {
        if (!value["SandboxTools"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResourceInfo.SandboxTools` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sandboxTools = value["SandboxTools"].GetInt64();
        m_sandboxToolsHasBeenSet = true;
    }

    if (value.HasMember("SandboxInstances") && !value["SandboxInstances"].IsNull())
    {
        if (!value["SandboxInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResourceInfo.SandboxInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sandboxInstances = value["SandboxInstances"].GetInt64();
        m_sandboxInstancesHasBeenSet = true;
    }

    if (value.HasMember("PausedInstances") && !value["PausedInstances"].IsNull())
    {
        if (!value["PausedInstances"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResourceInfo.PausedInstances` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pausedInstances = value["PausedInstances"].GetInt64();
        m_pausedInstancesHasBeenSet = true;
    }

    if (value.HasMember("CPUCores") && !value["CPUCores"].IsNull())
    {
        if (!value["CPUCores"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResourceInfo.CPUCores` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cPUCores = value["CPUCores"].GetDouble();
        m_cPUCoresHasBeenSet = true;
    }

    if (value.HasMember("MemoryGiB") && !value["MemoryGiB"].IsNull())
    {
        if (!value["MemoryGiB"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QuotaResourceInfo.MemoryGiB` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryGiB = value["MemoryGiB"].GetDouble();
        m_memoryGiBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuotaResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sandboxToolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SandboxTools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sandboxTools, allocator);
    }

    if (m_sandboxInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SandboxInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sandboxInstances, allocator);
    }

    if (m_pausedInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PausedInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pausedInstances, allocator);
    }

    if (m_cPUCoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPUCores";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPUCores, allocator);
    }

    if (m_memoryGiBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryGiB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryGiB, allocator);
    }

}


int64_t QuotaResourceInfo::GetSandboxTools() const
{
    return m_sandboxTools;
}

void QuotaResourceInfo::SetSandboxTools(const int64_t& _sandboxTools)
{
    m_sandboxTools = _sandboxTools;
    m_sandboxToolsHasBeenSet = true;
}

bool QuotaResourceInfo::SandboxToolsHasBeenSet() const
{
    return m_sandboxToolsHasBeenSet;
}

int64_t QuotaResourceInfo::GetSandboxInstances() const
{
    return m_sandboxInstances;
}

void QuotaResourceInfo::SetSandboxInstances(const int64_t& _sandboxInstances)
{
    m_sandboxInstances = _sandboxInstances;
    m_sandboxInstancesHasBeenSet = true;
}

bool QuotaResourceInfo::SandboxInstancesHasBeenSet() const
{
    return m_sandboxInstancesHasBeenSet;
}

int64_t QuotaResourceInfo::GetPausedInstances() const
{
    return m_pausedInstances;
}

void QuotaResourceInfo::SetPausedInstances(const int64_t& _pausedInstances)
{
    m_pausedInstances = _pausedInstances;
    m_pausedInstancesHasBeenSet = true;
}

bool QuotaResourceInfo::PausedInstancesHasBeenSet() const
{
    return m_pausedInstancesHasBeenSet;
}

double QuotaResourceInfo::GetCPUCores() const
{
    return m_cPUCores;
}

void QuotaResourceInfo::SetCPUCores(const double& _cPUCores)
{
    m_cPUCores = _cPUCores;
    m_cPUCoresHasBeenSet = true;
}

bool QuotaResourceInfo::CPUCoresHasBeenSet() const
{
    return m_cPUCoresHasBeenSet;
}

double QuotaResourceInfo::GetMemoryGiB() const
{
    return m_memoryGiB;
}

void QuotaResourceInfo::SetMemoryGiB(const double& _memoryGiB)
{
    m_memoryGiB = _memoryGiB;
    m_memoryGiBHasBeenSet = true;
}

bool QuotaResourceInfo::MemoryGiBHasBeenSet() const
{
    return m_memoryGiBHasBeenSet;
}

