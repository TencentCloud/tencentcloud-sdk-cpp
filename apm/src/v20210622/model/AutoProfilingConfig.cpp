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

#include <tencentcloud/apm/v20210622/model/AutoProfilingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

AutoProfilingConfig::AutoProfilingConfig() :
    m_cpuProfilingEnableHasBeenSet(false),
    m_memoryProfilingEnableHasBeenSet(false),
    m_cpuProfilingThresholdHasBeenSet(false),
    m_memoryProfilingThresholdHasBeenSet(false),
    m_cpuProfilingDurationHasBeenSet(false),
    m_memoryProfilingDurationHasBeenSet(false)
{
}

CoreInternalOutcome AutoProfilingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuProfilingEnable") && !value["CpuProfilingEnable"].IsNull())
    {
        if (!value["CpuProfilingEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoProfilingConfig.CpuProfilingEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cpuProfilingEnable = value["CpuProfilingEnable"].GetBool();
        m_cpuProfilingEnableHasBeenSet = true;
    }

    if (value.HasMember("MemoryProfilingEnable") && !value["MemoryProfilingEnable"].IsNull())
    {
        if (!value["MemoryProfilingEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoProfilingConfig.MemoryProfilingEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_memoryProfilingEnable = value["MemoryProfilingEnable"].GetBool();
        m_memoryProfilingEnableHasBeenSet = true;
    }

    if (value.HasMember("CpuProfilingThreshold") && !value["CpuProfilingThreshold"].IsNull())
    {
        if (!value["CpuProfilingThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoProfilingConfig.CpuProfilingThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuProfilingThreshold = value["CpuProfilingThreshold"].GetInt64();
        m_cpuProfilingThresholdHasBeenSet = true;
    }

    if (value.HasMember("MemoryProfilingThreshold") && !value["MemoryProfilingThreshold"].IsNull())
    {
        if (!value["MemoryProfilingThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoProfilingConfig.MemoryProfilingThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryProfilingThreshold = value["MemoryProfilingThreshold"].GetInt64();
        m_memoryProfilingThresholdHasBeenSet = true;
    }

    if (value.HasMember("CpuProfilingDuration") && !value["CpuProfilingDuration"].IsNull())
    {
        if (!value["CpuProfilingDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoProfilingConfig.CpuProfilingDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuProfilingDuration = value["CpuProfilingDuration"].GetInt64();
        m_cpuProfilingDurationHasBeenSet = true;
    }

    if (value.HasMember("MemoryProfilingDuration") && !value["MemoryProfilingDuration"].IsNull())
    {
        if (!value["MemoryProfilingDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoProfilingConfig.MemoryProfilingDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryProfilingDuration = value["MemoryProfilingDuration"].GetInt64();
        m_memoryProfilingDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoProfilingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuProfilingEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuProfilingEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuProfilingEnable, allocator);
    }

    if (m_memoryProfilingEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryProfilingEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryProfilingEnable, allocator);
    }

    if (m_cpuProfilingThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuProfilingThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuProfilingThreshold, allocator);
    }

    if (m_memoryProfilingThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryProfilingThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryProfilingThreshold, allocator);
    }

    if (m_cpuProfilingDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuProfilingDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuProfilingDuration, allocator);
    }

    if (m_memoryProfilingDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryProfilingDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryProfilingDuration, allocator);
    }

}


bool AutoProfilingConfig::GetCpuProfilingEnable() const
{
    return m_cpuProfilingEnable;
}

void AutoProfilingConfig::SetCpuProfilingEnable(const bool& _cpuProfilingEnable)
{
    m_cpuProfilingEnable = _cpuProfilingEnable;
    m_cpuProfilingEnableHasBeenSet = true;
}

bool AutoProfilingConfig::CpuProfilingEnableHasBeenSet() const
{
    return m_cpuProfilingEnableHasBeenSet;
}

bool AutoProfilingConfig::GetMemoryProfilingEnable() const
{
    return m_memoryProfilingEnable;
}

void AutoProfilingConfig::SetMemoryProfilingEnable(const bool& _memoryProfilingEnable)
{
    m_memoryProfilingEnable = _memoryProfilingEnable;
    m_memoryProfilingEnableHasBeenSet = true;
}

bool AutoProfilingConfig::MemoryProfilingEnableHasBeenSet() const
{
    return m_memoryProfilingEnableHasBeenSet;
}

int64_t AutoProfilingConfig::GetCpuProfilingThreshold() const
{
    return m_cpuProfilingThreshold;
}

void AutoProfilingConfig::SetCpuProfilingThreshold(const int64_t& _cpuProfilingThreshold)
{
    m_cpuProfilingThreshold = _cpuProfilingThreshold;
    m_cpuProfilingThresholdHasBeenSet = true;
}

bool AutoProfilingConfig::CpuProfilingThresholdHasBeenSet() const
{
    return m_cpuProfilingThresholdHasBeenSet;
}

int64_t AutoProfilingConfig::GetMemoryProfilingThreshold() const
{
    return m_memoryProfilingThreshold;
}

void AutoProfilingConfig::SetMemoryProfilingThreshold(const int64_t& _memoryProfilingThreshold)
{
    m_memoryProfilingThreshold = _memoryProfilingThreshold;
    m_memoryProfilingThresholdHasBeenSet = true;
}

bool AutoProfilingConfig::MemoryProfilingThresholdHasBeenSet() const
{
    return m_memoryProfilingThresholdHasBeenSet;
}

int64_t AutoProfilingConfig::GetCpuProfilingDuration() const
{
    return m_cpuProfilingDuration;
}

void AutoProfilingConfig::SetCpuProfilingDuration(const int64_t& _cpuProfilingDuration)
{
    m_cpuProfilingDuration = _cpuProfilingDuration;
    m_cpuProfilingDurationHasBeenSet = true;
}

bool AutoProfilingConfig::CpuProfilingDurationHasBeenSet() const
{
    return m_cpuProfilingDurationHasBeenSet;
}

int64_t AutoProfilingConfig::GetMemoryProfilingDuration() const
{
    return m_memoryProfilingDuration;
}

void AutoProfilingConfig::SetMemoryProfilingDuration(const int64_t& _memoryProfilingDuration)
{
    m_memoryProfilingDuration = _memoryProfilingDuration;
    m_memoryProfilingDurationHasBeenSet = true;
}

bool AutoProfilingConfig::MemoryProfilingDurationHasBeenSet() const
{
    return m_memoryProfilingDurationHasBeenSet;
}

