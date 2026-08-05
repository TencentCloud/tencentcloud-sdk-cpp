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

#include <tencentcloud/dlc/v20210125/model/MetricsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MetricsData::MetricsData() :
    m_requestsPerSecondHasBeenSet(false),
    m_errorRateHasBeenSet(false),
    m_p95LatencyMsHasBeenSet(false),
    m_p99LatencyMsHasBeenSet(false),
    m_queueDepthHasBeenSet(false),
    m_timeToFirstTokenP99MsHasBeenSet(false),
    m_timePerOutputTokenP99MsHasBeenSet(false),
    m_tokenThroughputHasBeenSet(false),
    m_gpuUtilizationHasBeenSet(false),
    m_gpuMemoryUsedMBHasBeenSet(false),
    m_gpuMemoryTotalMBHasBeenSet(false),
    m_cpuUtilizationHasBeenSet(false),
    m_memoryUsedBytesHasBeenSet(false),
    m_memoryTotalBytesHasBeenSet(false),
    m_networkReceiveMBPerSecondHasBeenSet(false),
    m_networkSendMBPerSecondHasBeenSet(false)
{
}

CoreInternalOutcome MetricsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestsPerSecond") && !value["RequestsPerSecond"].IsNull())
    {
        if (!value["RequestsPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.RequestsPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestsPerSecond = value["RequestsPerSecond"].GetDouble();
        m_requestsPerSecondHasBeenSet = true;
    }

    if (value.HasMember("ErrorRate") && !value["ErrorRate"].IsNull())
    {
        if (!value["ErrorRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.ErrorRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_errorRate = value["ErrorRate"].GetDouble();
        m_errorRateHasBeenSet = true;
    }

    if (value.HasMember("P95LatencyMs") && !value["P95LatencyMs"].IsNull())
    {
        if (!value["P95LatencyMs"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.P95LatencyMs` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p95LatencyMs = value["P95LatencyMs"].GetDouble();
        m_p95LatencyMsHasBeenSet = true;
    }

    if (value.HasMember("P99LatencyMs") && !value["P99LatencyMs"].IsNull())
    {
        if (!value["P99LatencyMs"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.P99LatencyMs` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p99LatencyMs = value["P99LatencyMs"].GetDouble();
        m_p99LatencyMsHasBeenSet = true;
    }

    if (value.HasMember("QueueDepth") && !value["QueueDepth"].IsNull())
    {
        if (!value["QueueDepth"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.QueueDepth` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queueDepth = value["QueueDepth"].GetDouble();
        m_queueDepthHasBeenSet = true;
    }

    if (value.HasMember("TimeToFirstTokenP99Ms") && !value["TimeToFirstTokenP99Ms"].IsNull())
    {
        if (!value["TimeToFirstTokenP99Ms"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.TimeToFirstTokenP99Ms` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeToFirstTokenP99Ms = value["TimeToFirstTokenP99Ms"].GetDouble();
        m_timeToFirstTokenP99MsHasBeenSet = true;
    }

    if (value.HasMember("TimePerOutputTokenP99Ms") && !value["TimePerOutputTokenP99Ms"].IsNull())
    {
        if (!value["TimePerOutputTokenP99Ms"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.TimePerOutputTokenP99Ms` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timePerOutputTokenP99Ms = value["TimePerOutputTokenP99Ms"].GetDouble();
        m_timePerOutputTokenP99MsHasBeenSet = true;
    }

    if (value.HasMember("TokenThroughput") && !value["TokenThroughput"].IsNull())
    {
        if (!value["TokenThroughput"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.TokenThroughput` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tokenThroughput = value["TokenThroughput"].GetDouble();
        m_tokenThroughputHasBeenSet = true;
    }

    if (value.HasMember("GpuUtilization") && !value["GpuUtilization"].IsNull())
    {
        if (!value["GpuUtilization"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.GpuUtilization` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gpuUtilization = value["GpuUtilization"].GetDouble();
        m_gpuUtilizationHasBeenSet = true;
    }

    if (value.HasMember("GpuMemoryUsedMB") && !value["GpuMemoryUsedMB"].IsNull())
    {
        if (!value["GpuMemoryUsedMB"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.GpuMemoryUsedMB` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemoryUsedMB = value["GpuMemoryUsedMB"].GetDouble();
        m_gpuMemoryUsedMBHasBeenSet = true;
    }

    if (value.HasMember("GpuMemoryTotalMB") && !value["GpuMemoryTotalMB"].IsNull())
    {
        if (!value["GpuMemoryTotalMB"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.GpuMemoryTotalMB` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_gpuMemoryTotalMB = value["GpuMemoryTotalMB"].GetDouble();
        m_gpuMemoryTotalMBHasBeenSet = true;
    }

    if (value.HasMember("CpuUtilization") && !value["CpuUtilization"].IsNull())
    {
        if (!value["CpuUtilization"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.CpuUtilization` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuUtilization = value["CpuUtilization"].GetDouble();
        m_cpuUtilizationHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsedBytes") && !value["MemoryUsedBytes"].IsNull())
    {
        if (!value["MemoryUsedBytes"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.MemoryUsedBytes` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsedBytes = value["MemoryUsedBytes"].GetDouble();
        m_memoryUsedBytesHasBeenSet = true;
    }

    if (value.HasMember("MemoryTotalBytes") && !value["MemoryTotalBytes"].IsNull())
    {
        if (!value["MemoryTotalBytes"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.MemoryTotalBytes` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryTotalBytes = value["MemoryTotalBytes"].GetDouble();
        m_memoryTotalBytesHasBeenSet = true;
    }

    if (value.HasMember("NetworkReceiveMBPerSecond") && !value["NetworkReceiveMBPerSecond"].IsNull())
    {
        if (!value["NetworkReceiveMBPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.NetworkReceiveMBPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_networkReceiveMBPerSecond = value["NetworkReceiveMBPerSecond"].GetDouble();
        m_networkReceiveMBPerSecondHasBeenSet = true;
    }

    if (value.HasMember("NetworkSendMBPerSecond") && !value["NetworkSendMBPerSecond"].IsNull())
    {
        if (!value["NetworkSendMBPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricsData.NetworkSendMBPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_networkSendMBPerSecond = value["NetworkSendMBPerSecond"].GetDouble();
        m_networkSendMBPerSecondHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestsPerSecond, allocator);
    }

    if (m_errorRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorRate, allocator);
    }

    if (m_p95LatencyMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P95LatencyMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p95LatencyMs, allocator);
    }

    if (m_p99LatencyMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P99LatencyMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p99LatencyMs, allocator);
    }

    if (m_queueDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueDepth, allocator);
    }

    if (m_timeToFirstTokenP99MsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToFirstTokenP99Ms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeToFirstTokenP99Ms, allocator);
    }

    if (m_timePerOutputTokenP99MsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePerOutputTokenP99Ms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timePerOutputTokenP99Ms, allocator);
    }

    if (m_tokenThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenThroughput, allocator);
    }

    if (m_gpuUtilizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuUtilization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuUtilization, allocator);
    }

    if (m_gpuMemoryUsedMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemoryUsedMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemoryUsedMB, allocator);
    }

    if (m_gpuMemoryTotalMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuMemoryTotalMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gpuMemoryTotalMB, allocator);
    }

    if (m_cpuUtilizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUtilization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuUtilization, allocator);
    }

    if (m_memoryUsedBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsedBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsedBytes, allocator);
    }

    if (m_memoryTotalBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryTotalBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryTotalBytes, allocator);
    }

    if (m_networkReceiveMBPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkReceiveMBPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkReceiveMBPerSecond, allocator);
    }

    if (m_networkSendMBPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkSendMBPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkSendMBPerSecond, allocator);
    }

}


double MetricsData::GetRequestsPerSecond() const
{
    return m_requestsPerSecond;
}

void MetricsData::SetRequestsPerSecond(const double& _requestsPerSecond)
{
    m_requestsPerSecond = _requestsPerSecond;
    m_requestsPerSecondHasBeenSet = true;
}

bool MetricsData::RequestsPerSecondHasBeenSet() const
{
    return m_requestsPerSecondHasBeenSet;
}

double MetricsData::GetErrorRate() const
{
    return m_errorRate;
}

void MetricsData::SetErrorRate(const double& _errorRate)
{
    m_errorRate = _errorRate;
    m_errorRateHasBeenSet = true;
}

bool MetricsData::ErrorRateHasBeenSet() const
{
    return m_errorRateHasBeenSet;
}

double MetricsData::GetP95LatencyMs() const
{
    return m_p95LatencyMs;
}

void MetricsData::SetP95LatencyMs(const double& _p95LatencyMs)
{
    m_p95LatencyMs = _p95LatencyMs;
    m_p95LatencyMsHasBeenSet = true;
}

bool MetricsData::P95LatencyMsHasBeenSet() const
{
    return m_p95LatencyMsHasBeenSet;
}

double MetricsData::GetP99LatencyMs() const
{
    return m_p99LatencyMs;
}

void MetricsData::SetP99LatencyMs(const double& _p99LatencyMs)
{
    m_p99LatencyMs = _p99LatencyMs;
    m_p99LatencyMsHasBeenSet = true;
}

bool MetricsData::P99LatencyMsHasBeenSet() const
{
    return m_p99LatencyMsHasBeenSet;
}

double MetricsData::GetQueueDepth() const
{
    return m_queueDepth;
}

void MetricsData::SetQueueDepth(const double& _queueDepth)
{
    m_queueDepth = _queueDepth;
    m_queueDepthHasBeenSet = true;
}

bool MetricsData::QueueDepthHasBeenSet() const
{
    return m_queueDepthHasBeenSet;
}

double MetricsData::GetTimeToFirstTokenP99Ms() const
{
    return m_timeToFirstTokenP99Ms;
}

void MetricsData::SetTimeToFirstTokenP99Ms(const double& _timeToFirstTokenP99Ms)
{
    m_timeToFirstTokenP99Ms = _timeToFirstTokenP99Ms;
    m_timeToFirstTokenP99MsHasBeenSet = true;
}

bool MetricsData::TimeToFirstTokenP99MsHasBeenSet() const
{
    return m_timeToFirstTokenP99MsHasBeenSet;
}

double MetricsData::GetTimePerOutputTokenP99Ms() const
{
    return m_timePerOutputTokenP99Ms;
}

void MetricsData::SetTimePerOutputTokenP99Ms(const double& _timePerOutputTokenP99Ms)
{
    m_timePerOutputTokenP99Ms = _timePerOutputTokenP99Ms;
    m_timePerOutputTokenP99MsHasBeenSet = true;
}

bool MetricsData::TimePerOutputTokenP99MsHasBeenSet() const
{
    return m_timePerOutputTokenP99MsHasBeenSet;
}

double MetricsData::GetTokenThroughput() const
{
    return m_tokenThroughput;
}

void MetricsData::SetTokenThroughput(const double& _tokenThroughput)
{
    m_tokenThroughput = _tokenThroughput;
    m_tokenThroughputHasBeenSet = true;
}

bool MetricsData::TokenThroughputHasBeenSet() const
{
    return m_tokenThroughputHasBeenSet;
}

double MetricsData::GetGpuUtilization() const
{
    return m_gpuUtilization;
}

void MetricsData::SetGpuUtilization(const double& _gpuUtilization)
{
    m_gpuUtilization = _gpuUtilization;
    m_gpuUtilizationHasBeenSet = true;
}

bool MetricsData::GpuUtilizationHasBeenSet() const
{
    return m_gpuUtilizationHasBeenSet;
}

double MetricsData::GetGpuMemoryUsedMB() const
{
    return m_gpuMemoryUsedMB;
}

void MetricsData::SetGpuMemoryUsedMB(const double& _gpuMemoryUsedMB)
{
    m_gpuMemoryUsedMB = _gpuMemoryUsedMB;
    m_gpuMemoryUsedMBHasBeenSet = true;
}

bool MetricsData::GpuMemoryUsedMBHasBeenSet() const
{
    return m_gpuMemoryUsedMBHasBeenSet;
}

double MetricsData::GetGpuMemoryTotalMB() const
{
    return m_gpuMemoryTotalMB;
}

void MetricsData::SetGpuMemoryTotalMB(const double& _gpuMemoryTotalMB)
{
    m_gpuMemoryTotalMB = _gpuMemoryTotalMB;
    m_gpuMemoryTotalMBHasBeenSet = true;
}

bool MetricsData::GpuMemoryTotalMBHasBeenSet() const
{
    return m_gpuMemoryTotalMBHasBeenSet;
}

double MetricsData::GetCpuUtilization() const
{
    return m_cpuUtilization;
}

void MetricsData::SetCpuUtilization(const double& _cpuUtilization)
{
    m_cpuUtilization = _cpuUtilization;
    m_cpuUtilizationHasBeenSet = true;
}

bool MetricsData::CpuUtilizationHasBeenSet() const
{
    return m_cpuUtilizationHasBeenSet;
}

double MetricsData::GetMemoryUsedBytes() const
{
    return m_memoryUsedBytes;
}

void MetricsData::SetMemoryUsedBytes(const double& _memoryUsedBytes)
{
    m_memoryUsedBytes = _memoryUsedBytes;
    m_memoryUsedBytesHasBeenSet = true;
}

bool MetricsData::MemoryUsedBytesHasBeenSet() const
{
    return m_memoryUsedBytesHasBeenSet;
}

double MetricsData::GetMemoryTotalBytes() const
{
    return m_memoryTotalBytes;
}

void MetricsData::SetMemoryTotalBytes(const double& _memoryTotalBytes)
{
    m_memoryTotalBytes = _memoryTotalBytes;
    m_memoryTotalBytesHasBeenSet = true;
}

bool MetricsData::MemoryTotalBytesHasBeenSet() const
{
    return m_memoryTotalBytesHasBeenSet;
}

double MetricsData::GetNetworkReceiveMBPerSecond() const
{
    return m_networkReceiveMBPerSecond;
}

void MetricsData::SetNetworkReceiveMBPerSecond(const double& _networkReceiveMBPerSecond)
{
    m_networkReceiveMBPerSecond = _networkReceiveMBPerSecond;
    m_networkReceiveMBPerSecondHasBeenSet = true;
}

bool MetricsData::NetworkReceiveMBPerSecondHasBeenSet() const
{
    return m_networkReceiveMBPerSecondHasBeenSet;
}

double MetricsData::GetNetworkSendMBPerSecond() const
{
    return m_networkSendMBPerSecond;
}

void MetricsData::SetNetworkSendMBPerSecond(const double& _networkSendMBPerSecond)
{
    m_networkSendMBPerSecond = _networkSendMBPerSecond;
    m_networkSendMBPerSecondHasBeenSet = true;
}

bool MetricsData::NetworkSendMBPerSecondHasBeenSet() const
{
    return m_networkSendMBPerSecondHasBeenSet;
}

