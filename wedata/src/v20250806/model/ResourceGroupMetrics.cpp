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

#include <tencentcloud/wedata/v20250806/model/ResourceGroupMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ResourceGroupMetrics::ResourceGroupMetrics() :
    m_cpuNumHasBeenSet(false),
    m_diskVolumeHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_maximumConcurrencyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_metricSnapshotsHasBeenSet(false)
{
}

CoreInternalOutcome ResourceGroupMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupMetrics.CpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetUint64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("DiskVolume") && !value["DiskVolume"].IsNull())
    {
        if (!value["DiskVolume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupMetrics.DiskVolume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskVolume = value["DiskVolume"].GetUint64();
        m_diskVolumeHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupMetrics.MemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetUint64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("LifeCycle") && !value["LifeCycle"].IsNull())
    {
        if (!value["LifeCycle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupMetrics.LifeCycle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycle = value["LifeCycle"].GetUint64();
        m_lifeCycleHasBeenSet = true;
    }

    if (value.HasMember("MaximumConcurrency") && !value["MaximumConcurrency"].IsNull())
    {
        if (!value["MaximumConcurrency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupMetrics.MaximumConcurrency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumConcurrency = value["MaximumConcurrency"].GetUint64();
        m_maximumConcurrencyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupMetrics.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MetricSnapshots") && !value["MetricSnapshots"].IsNull())
    {
        if (!value["MetricSnapshots"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceGroupMetrics.MetricSnapshots` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricSnapshots"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricSnapshots.push_back(item);
        }
        m_metricSnapshotsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceGroupMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_diskVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskVolume, allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_lifeCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeCycle, allocator);
    }

    if (m_maximumConcurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumConcurrency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumConcurrency, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_metricSnapshotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricSnapshots";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricSnapshots.begin(); itr != m_metricSnapshots.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ResourceGroupMetrics::GetCpuNum() const
{
    return m_cpuNum;
}

void ResourceGroupMetrics::SetCpuNum(const uint64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool ResourceGroupMetrics::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

uint64_t ResourceGroupMetrics::GetDiskVolume() const
{
    return m_diskVolume;
}

void ResourceGroupMetrics::SetDiskVolume(const uint64_t& _diskVolume)
{
    m_diskVolume = _diskVolume;
    m_diskVolumeHasBeenSet = true;
}

bool ResourceGroupMetrics::DiskVolumeHasBeenSet() const
{
    return m_diskVolumeHasBeenSet;
}

uint64_t ResourceGroupMetrics::GetMemSize() const
{
    return m_memSize;
}

void ResourceGroupMetrics::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool ResourceGroupMetrics::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

uint64_t ResourceGroupMetrics::GetLifeCycle() const
{
    return m_lifeCycle;
}

void ResourceGroupMetrics::SetLifeCycle(const uint64_t& _lifeCycle)
{
    m_lifeCycle = _lifeCycle;
    m_lifeCycleHasBeenSet = true;
}

bool ResourceGroupMetrics::LifeCycleHasBeenSet() const
{
    return m_lifeCycleHasBeenSet;
}

uint64_t ResourceGroupMetrics::GetMaximumConcurrency() const
{
    return m_maximumConcurrency;
}

void ResourceGroupMetrics::SetMaximumConcurrency(const uint64_t& _maximumConcurrency)
{
    m_maximumConcurrency = _maximumConcurrency;
    m_maximumConcurrencyHasBeenSet = true;
}

bool ResourceGroupMetrics::MaximumConcurrencyHasBeenSet() const
{
    return m_maximumConcurrencyHasBeenSet;
}

uint64_t ResourceGroupMetrics::GetStatus() const
{
    return m_status;
}

void ResourceGroupMetrics::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ResourceGroupMetrics::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<MetricData> ResourceGroupMetrics::GetMetricSnapshots() const
{
    return m_metricSnapshots;
}

void ResourceGroupMetrics::SetMetricSnapshots(const vector<MetricData>& _metricSnapshots)
{
    m_metricSnapshots = _metricSnapshots;
    m_metricSnapshotsHasBeenSet = true;
}

bool ResourceGroupMetrics::MetricSnapshotsHasBeenSet() const
{
    return m_metricSnapshotsHasBeenSet;
}

