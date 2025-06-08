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

#include <tencentcloud/wedata/v20210820/model/ExecutorUsageTrendInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ExecutorUsageTrendInfo::ExecutorUsageTrendInfo() :
    m_timestampHasBeenSet(false),
    m_cpuUsagePercentHasBeenSet(false),
    m_memUsagePercentHasBeenSet(false),
    m_concurrencyUsageHasBeenSet(false),
    m_oceanusCuUsageHasBeenSet(false)
{
}

CoreInternalOutcome ExecutorUsageTrendInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorUsageTrendInfo.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("CpuUsagePercent") && !value["CpuUsagePercent"].IsNull())
    {
        if (!value["CpuUsagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorUsageTrendInfo.CpuUsagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuUsagePercent = value["CpuUsagePercent"].GetDouble();
        m_cpuUsagePercentHasBeenSet = true;
    }

    if (value.HasMember("MemUsagePercent") && !value["MemUsagePercent"].IsNull())
    {
        if (!value["MemUsagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorUsageTrendInfo.MemUsagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memUsagePercent = value["MemUsagePercent"].GetDouble();
        m_memUsagePercentHasBeenSet = true;
    }

    if (value.HasMember("ConcurrencyUsage") && !value["ConcurrencyUsage"].IsNull())
    {
        if (!value["ConcurrencyUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorUsageTrendInfo.ConcurrencyUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_concurrencyUsage = value["ConcurrencyUsage"].GetDouble();
        m_concurrencyUsageHasBeenSet = true;
    }

    if (value.HasMember("OceanusCuUsage") && !value["OceanusCuUsage"].IsNull())
    {
        if (!value["OceanusCuUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutorUsageTrendInfo.OceanusCuUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_oceanusCuUsage = value["OceanusCuUsage"].GetDouble();
        m_oceanusCuUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutorUsageTrendInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_cpuUsagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuUsagePercent, allocator);
    }

    if (m_memUsagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemUsagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memUsagePercent, allocator);
    }

    if (m_concurrencyUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrencyUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concurrencyUsage, allocator);
    }

    if (m_oceanusCuUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OceanusCuUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oceanusCuUsage, allocator);
    }

}


int64_t ExecutorUsageTrendInfo::GetTimestamp() const
{
    return m_timestamp;
}

void ExecutorUsageTrendInfo::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool ExecutorUsageTrendInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

double ExecutorUsageTrendInfo::GetCpuUsagePercent() const
{
    return m_cpuUsagePercent;
}

void ExecutorUsageTrendInfo::SetCpuUsagePercent(const double& _cpuUsagePercent)
{
    m_cpuUsagePercent = _cpuUsagePercent;
    m_cpuUsagePercentHasBeenSet = true;
}

bool ExecutorUsageTrendInfo::CpuUsagePercentHasBeenSet() const
{
    return m_cpuUsagePercentHasBeenSet;
}

double ExecutorUsageTrendInfo::GetMemUsagePercent() const
{
    return m_memUsagePercent;
}

void ExecutorUsageTrendInfo::SetMemUsagePercent(const double& _memUsagePercent)
{
    m_memUsagePercent = _memUsagePercent;
    m_memUsagePercentHasBeenSet = true;
}

bool ExecutorUsageTrendInfo::MemUsagePercentHasBeenSet() const
{
    return m_memUsagePercentHasBeenSet;
}

double ExecutorUsageTrendInfo::GetConcurrencyUsage() const
{
    return m_concurrencyUsage;
}

void ExecutorUsageTrendInfo::SetConcurrencyUsage(const double& _concurrencyUsage)
{
    m_concurrencyUsage = _concurrencyUsage;
    m_concurrencyUsageHasBeenSet = true;
}

bool ExecutorUsageTrendInfo::ConcurrencyUsageHasBeenSet() const
{
    return m_concurrencyUsageHasBeenSet;
}

double ExecutorUsageTrendInfo::GetOceanusCuUsage() const
{
    return m_oceanusCuUsage;
}

void ExecutorUsageTrendInfo::SetOceanusCuUsage(const double& _oceanusCuUsage)
{
    m_oceanusCuUsage = _oceanusCuUsage;
    m_oceanusCuUsageHasBeenSet = true;
}

bool ExecutorUsageTrendInfo::OceanusCuUsageHasBeenSet() const
{
    return m_oceanusCuUsageHasBeenSet;
}

