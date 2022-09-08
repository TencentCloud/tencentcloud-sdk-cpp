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

#include <tencentcloud/cdb/v20170320/model/CdbSellConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CdbSellConfig::CdbSellConfig() :
    m_memoryHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_volumeMinHasBeenSet(false),
    m_volumeMaxHasBeenSet(false),
    m_volumeStepHasBeenSet(false),
    m_iopsHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome CdbSellConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("VolumeMin") && !value["VolumeMin"].IsNull())
    {
        if (!value["VolumeMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.VolumeMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeMin = value["VolumeMin"].GetInt64();
        m_volumeMinHasBeenSet = true;
    }

    if (value.HasMember("VolumeMax") && !value["VolumeMax"].IsNull())
    {
        if (!value["VolumeMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.VolumeMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeMax = value["VolumeMax"].GetInt64();
        m_volumeMaxHasBeenSet = true;
    }

    if (value.HasMember("VolumeStep") && !value["VolumeStep"].IsNull())
    {
        if (!value["VolumeStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.VolumeStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeStep = value["VolumeStep"].GetInt64();
        m_volumeStepHasBeenSet = true;
    }

    if (value.HasMember("Iops") && !value["Iops"].IsNull())
    {
        if (!value["Iops"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.Iops` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iops = value["Iops"].GetInt64();
        m_iopsHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CdbSellConfig.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CdbSellConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_volumeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volumeMin, allocator);
    }

    if (m_volumeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volumeMax, allocator);
    }

    if (m_volumeStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volumeStep, allocator);
    }

    if (m_iopsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iops";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iops, allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


int64_t CdbSellConfig::GetMemory() const
{
    return m_memory;
}

void CdbSellConfig::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CdbSellConfig::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CdbSellConfig::GetCpu() const
{
    return m_cpu;
}

void CdbSellConfig::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CdbSellConfig::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CdbSellConfig::GetVolumeMin() const
{
    return m_volumeMin;
}

void CdbSellConfig::SetVolumeMin(const int64_t& _volumeMin)
{
    m_volumeMin = _volumeMin;
    m_volumeMinHasBeenSet = true;
}

bool CdbSellConfig::VolumeMinHasBeenSet() const
{
    return m_volumeMinHasBeenSet;
}

int64_t CdbSellConfig::GetVolumeMax() const
{
    return m_volumeMax;
}

void CdbSellConfig::SetVolumeMax(const int64_t& _volumeMax)
{
    m_volumeMax = _volumeMax;
    m_volumeMaxHasBeenSet = true;
}

bool CdbSellConfig::VolumeMaxHasBeenSet() const
{
    return m_volumeMaxHasBeenSet;
}

int64_t CdbSellConfig::GetVolumeStep() const
{
    return m_volumeStep;
}

void CdbSellConfig::SetVolumeStep(const int64_t& _volumeStep)
{
    m_volumeStep = _volumeStep;
    m_volumeStepHasBeenSet = true;
}

bool CdbSellConfig::VolumeStepHasBeenSet() const
{
    return m_volumeStepHasBeenSet;
}

int64_t CdbSellConfig::GetIops() const
{
    return m_iops;
}

void CdbSellConfig::SetIops(const int64_t& _iops)
{
    m_iops = _iops;
    m_iopsHasBeenSet = true;
}

bool CdbSellConfig::IopsHasBeenSet() const
{
    return m_iopsHasBeenSet;
}

string CdbSellConfig::GetInfo() const
{
    return m_info;
}

void CdbSellConfig::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool CdbSellConfig::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

int64_t CdbSellConfig::GetStatus() const
{
    return m_status;
}

void CdbSellConfig::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CdbSellConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CdbSellConfig::GetDeviceType() const
{
    return m_deviceType;
}

void CdbSellConfig::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CdbSellConfig::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CdbSellConfig::GetEngineType() const
{
    return m_engineType;
}

void CdbSellConfig::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool CdbSellConfig::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

int64_t CdbSellConfig::GetId() const
{
    return m_id;
}

void CdbSellConfig::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CdbSellConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

