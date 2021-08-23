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

#include <tencentcloud/mariadb/v20170312/model/ResourceUsageMonitorSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ResourceUsageMonitorSet::ResourceUsageMonitorSet() :
    m_binlogDiskAvailableHasBeenSet(false),
    m_cpuUsageRateHasBeenSet(false),
    m_memAvailableHasBeenSet(false),
    m_dataDiskAvailableHasBeenSet(false)
{
}

CoreInternalOutcome ResourceUsageMonitorSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BinlogDiskAvailable") && !value["BinlogDiskAvailable"].IsNull())
    {
        if (!value["BinlogDiskAvailable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsageMonitorSet.BinlogDiskAvailable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_binlogDiskAvailable.Deserialize(value["BinlogDiskAvailable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_binlogDiskAvailableHasBeenSet = true;
    }

    if (value.HasMember("CpuUsageRate") && !value["CpuUsageRate"].IsNull())
    {
        if (!value["CpuUsageRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsageMonitorSet.CpuUsageRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cpuUsageRate.Deserialize(value["CpuUsageRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cpuUsageRateHasBeenSet = true;
    }

    if (value.HasMember("MemAvailable") && !value["MemAvailable"].IsNull())
    {
        if (!value["MemAvailable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsageMonitorSet.MemAvailable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memAvailable.Deserialize(value["MemAvailable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memAvailableHasBeenSet = true;
    }

    if (value.HasMember("DataDiskAvailable") && !value["DataDiskAvailable"].IsNull())
    {
        if (!value["DataDiskAvailable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceUsageMonitorSet.DataDiskAvailable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataDiskAvailable.Deserialize(value["DataDiskAvailable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataDiskAvailableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceUsageMonitorSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_binlogDiskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogDiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_binlogDiskAvailable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cpuUsageRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsageRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cpuUsageRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memAvailable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDiskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataDiskAvailable.ToJsonObject(value[key.c_str()], allocator);
    }

}


MonitorData ResourceUsageMonitorSet::GetBinlogDiskAvailable() const
{
    return m_binlogDiskAvailable;
}

void ResourceUsageMonitorSet::SetBinlogDiskAvailable(const MonitorData& _binlogDiskAvailable)
{
    m_binlogDiskAvailable = _binlogDiskAvailable;
    m_binlogDiskAvailableHasBeenSet = true;
}

bool ResourceUsageMonitorSet::BinlogDiskAvailableHasBeenSet() const
{
    return m_binlogDiskAvailableHasBeenSet;
}

MonitorData ResourceUsageMonitorSet::GetCpuUsageRate() const
{
    return m_cpuUsageRate;
}

void ResourceUsageMonitorSet::SetCpuUsageRate(const MonitorData& _cpuUsageRate)
{
    m_cpuUsageRate = _cpuUsageRate;
    m_cpuUsageRateHasBeenSet = true;
}

bool ResourceUsageMonitorSet::CpuUsageRateHasBeenSet() const
{
    return m_cpuUsageRateHasBeenSet;
}

MonitorData ResourceUsageMonitorSet::GetMemAvailable() const
{
    return m_memAvailable;
}

void ResourceUsageMonitorSet::SetMemAvailable(const MonitorData& _memAvailable)
{
    m_memAvailable = _memAvailable;
    m_memAvailableHasBeenSet = true;
}

bool ResourceUsageMonitorSet::MemAvailableHasBeenSet() const
{
    return m_memAvailableHasBeenSet;
}

MonitorData ResourceUsageMonitorSet::GetDataDiskAvailable() const
{
    return m_dataDiskAvailable;
}

void ResourceUsageMonitorSet::SetDataDiskAvailable(const MonitorData& _dataDiskAvailable)
{
    m_dataDiskAvailable = _dataDiskAvailable;
    m_dataDiskAvailableHasBeenSet = true;
}

bool ResourceUsageMonitorSet::DataDiskAvailableHasBeenSet() const
{
    return m_dataDiskAvailableHasBeenSet;
}

