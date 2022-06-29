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

#include <tencentcloud/cdb/v20170320/model/SellConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

SellConfig::SellConfig() :
    m_deviceHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_cdbTypeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_volumeMinHasBeenSet(false),
    m_volumeMaxHasBeenSet(false),
    m_volumeStepHasBeenSet(false),
    m_connectionHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_iopsHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_deviceTypeNameHasBeenSet(false),
    m_engineTypeHasBeenSet(false)
{
}

CoreInternalOutcome SellConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Device") && !value["Device"].IsNull())
    {
        if (!value["Device"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Device` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_device = string(value["Device"].GetString());
        m_deviceHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CdbType") && !value["CdbType"].IsNull())
    {
        if (!value["CdbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.CdbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdbType = string(value["CdbType"].GetString());
        m_cdbTypeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("VolumeMin") && !value["VolumeMin"].IsNull())
    {
        if (!value["VolumeMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.VolumeMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeMin = value["VolumeMin"].GetInt64();
        m_volumeMinHasBeenSet = true;
    }

    if (value.HasMember("VolumeMax") && !value["VolumeMax"].IsNull())
    {
        if (!value["VolumeMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.VolumeMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeMax = value["VolumeMax"].GetInt64();
        m_volumeMaxHasBeenSet = true;
    }

    if (value.HasMember("VolumeStep") && !value["VolumeStep"].IsNull())
    {
        if (!value["VolumeStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.VolumeStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeStep = value["VolumeStep"].GetInt64();
        m_volumeStepHasBeenSet = true;
    }

    if (value.HasMember("Connection") && !value["Connection"].IsNull())
    {
        if (!value["Connection"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Connection` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connection = value["Connection"].GetInt64();
        m_connectionHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Qps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetInt64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Iops") && !value["Iops"].IsNull())
    {
        if (!value["Iops"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Iops` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iops = value["Iops"].GetInt64();
        m_iopsHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.Tag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tag = value["Tag"].GetInt64();
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceTypeName") && !value["DeviceTypeName"].IsNull())
    {
        if (!value["DeviceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.DeviceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceTypeName = string(value["DeviceTypeName"].GetString());
        m_deviceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SellConfig.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SellConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_device.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cdbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdbType.c_str(), allocator).Move(), allocator);
    }

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

    if (m_connectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connection, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
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

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tag, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

}


string SellConfig::GetDevice() const
{
    return m_device;
}

void SellConfig::SetDevice(const string& _device)
{
    m_device = _device;
    m_deviceHasBeenSet = true;
}

bool SellConfig::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string SellConfig::GetType() const
{
    return m_type;
}

void SellConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SellConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SellConfig::GetCdbType() const
{
    return m_cdbType;
}

void SellConfig::SetCdbType(const string& _cdbType)
{
    m_cdbType = _cdbType;
    m_cdbTypeHasBeenSet = true;
}

bool SellConfig::CdbTypeHasBeenSet() const
{
    return m_cdbTypeHasBeenSet;
}

int64_t SellConfig::GetMemory() const
{
    return m_memory;
}

void SellConfig::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool SellConfig::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t SellConfig::GetCpu() const
{
    return m_cpu;
}

void SellConfig::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool SellConfig::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t SellConfig::GetVolumeMin() const
{
    return m_volumeMin;
}

void SellConfig::SetVolumeMin(const int64_t& _volumeMin)
{
    m_volumeMin = _volumeMin;
    m_volumeMinHasBeenSet = true;
}

bool SellConfig::VolumeMinHasBeenSet() const
{
    return m_volumeMinHasBeenSet;
}

int64_t SellConfig::GetVolumeMax() const
{
    return m_volumeMax;
}

void SellConfig::SetVolumeMax(const int64_t& _volumeMax)
{
    m_volumeMax = _volumeMax;
    m_volumeMaxHasBeenSet = true;
}

bool SellConfig::VolumeMaxHasBeenSet() const
{
    return m_volumeMaxHasBeenSet;
}

int64_t SellConfig::GetVolumeStep() const
{
    return m_volumeStep;
}

void SellConfig::SetVolumeStep(const int64_t& _volumeStep)
{
    m_volumeStep = _volumeStep;
    m_volumeStepHasBeenSet = true;
}

bool SellConfig::VolumeStepHasBeenSet() const
{
    return m_volumeStepHasBeenSet;
}

int64_t SellConfig::GetConnection() const
{
    return m_connection;
}

void SellConfig::SetConnection(const int64_t& _connection)
{
    m_connection = _connection;
    m_connectionHasBeenSet = true;
}

bool SellConfig::ConnectionHasBeenSet() const
{
    return m_connectionHasBeenSet;
}

int64_t SellConfig::GetQps() const
{
    return m_qps;
}

void SellConfig::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool SellConfig::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

int64_t SellConfig::GetIops() const
{
    return m_iops;
}

void SellConfig::SetIops(const int64_t& _iops)
{
    m_iops = _iops;
    m_iopsHasBeenSet = true;
}

bool SellConfig::IopsHasBeenSet() const
{
    return m_iopsHasBeenSet;
}

string SellConfig::GetInfo() const
{
    return m_info;
}

void SellConfig::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool SellConfig::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

int64_t SellConfig::GetStatus() const
{
    return m_status;
}

void SellConfig::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SellConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t SellConfig::GetTag() const
{
    return m_tag;
}

void SellConfig::SetTag(const int64_t& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool SellConfig::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string SellConfig::GetDeviceType() const
{
    return m_deviceType;
}

void SellConfig::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool SellConfig::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string SellConfig::GetDeviceTypeName() const
{
    return m_deviceTypeName;
}

void SellConfig::SetDeviceTypeName(const string& _deviceTypeName)
{
    m_deviceTypeName = _deviceTypeName;
    m_deviceTypeNameHasBeenSet = true;
}

bool SellConfig::DeviceTypeNameHasBeenSet() const
{
    return m_deviceTypeNameHasBeenSet;
}

string SellConfig::GetEngineType() const
{
    return m_engineType;
}

void SellConfig::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool SellConfig::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

