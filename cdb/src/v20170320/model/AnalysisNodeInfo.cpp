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

#include <tencentcloud/cdb/v20170320/model/AnalysisNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AnalysisNodeInfo::AnalysisNodeInfo() :
    m_nodeIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_dataStatusHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome AnalysisNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisNodeInfo.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisNodeInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DataStatus") && !value["DataStatus"].IsNull())
    {
        if (!value["DataStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisNodeInfo.DataStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataStatus = string(value["DataStatus"].GetString());
        m_dataStatusHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisNodeInfo.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisNodeInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisNodeInfo.Storage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetUint64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisNodeInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisNodeInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalysisNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_dataStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataStatus.c_str(), allocator).Move(), allocator);
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

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string AnalysisNodeInfo::GetNodeId() const
{
    return m_nodeId;
}

void AnalysisNodeInfo::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool AnalysisNodeInfo::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string AnalysisNodeInfo::GetStatus() const
{
    return m_status;
}

void AnalysisNodeInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AnalysisNodeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AnalysisNodeInfo::GetDataStatus() const
{
    return m_dataStatus;
}

void AnalysisNodeInfo::SetDataStatus(const string& _dataStatus)
{
    m_dataStatus = _dataStatus;
    m_dataStatusHasBeenSet = true;
}

bool AnalysisNodeInfo::DataStatusHasBeenSet() const
{
    return m_dataStatusHasBeenSet;
}

uint64_t AnalysisNodeInfo::GetCpu() const
{
    return m_cpu;
}

void AnalysisNodeInfo::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool AnalysisNodeInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t AnalysisNodeInfo::GetMemory() const
{
    return m_memory;
}

void AnalysisNodeInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool AnalysisNodeInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t AnalysisNodeInfo::GetStorage() const
{
    return m_storage;
}

void AnalysisNodeInfo::SetStorage(const uint64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool AnalysisNodeInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string AnalysisNodeInfo::GetZone() const
{
    return m_zone;
}

void AnalysisNodeInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool AnalysisNodeInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string AnalysisNodeInfo::GetMessage() const
{
    return m_message;
}

void AnalysisNodeInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AnalysisNodeInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

