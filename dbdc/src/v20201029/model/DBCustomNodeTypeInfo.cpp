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

#include <tencentcloud/dbdc/v20201029/model/DBCustomNodeTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DBCustomNodeTypeInfo::DBCustomNodeTypeInfo() :
    m_zoneHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeFamilyHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_systemDiskTypesHasBeenSet(false),
    m_dataDiskTypesHasBeenSet(false)
{
}

CoreInternalOutcome DBCustomNodeTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomNodeTypeInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomNodeTypeInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeFamily") && !value["NodeFamily"].IsNull())
    {
        if (!value["NodeFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomNodeTypeInfo.NodeFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeFamily = string(value["NodeFamily"].GetString());
        m_nodeFamilyHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomNodeTypeInfo.CPU` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetUint64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomNodeTypeInfo.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBCustomNodeTypeInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SystemDiskTypes") && !value["SystemDiskTypes"].IsNull())
    {
        if (!value["SystemDiskTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBCustomNodeTypeInfo.SystemDiskTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SystemDiskTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_systemDiskTypes.push_back((*itr).GetString());
        }
        m_systemDiskTypesHasBeenSet = true;
    }

    if (value.HasMember("DataDiskTypes") && !value["DataDiskTypes"].IsNull())
    {
        if (!value["DataDiskTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBCustomNodeTypeInfo.DataDiskTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DataDiskTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataDiskTypes.push_back((*itr).GetString());
        }
        m_dataDiskTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBCustomNodeTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_systemDiskTypes.begin(); itr != m_systemDiskTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataDiskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataDiskTypes.begin(); itr != m_dataDiskTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DBCustomNodeTypeInfo::GetZone() const
{
    return m_zone;
}

void DBCustomNodeTypeInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DBCustomNodeTypeInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DBCustomNodeTypeInfo::GetNodeType() const
{
    return m_nodeType;
}

void DBCustomNodeTypeInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool DBCustomNodeTypeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string DBCustomNodeTypeInfo::GetNodeFamily() const
{
    return m_nodeFamily;
}

void DBCustomNodeTypeInfo::SetNodeFamily(const string& _nodeFamily)
{
    m_nodeFamily = _nodeFamily;
    m_nodeFamilyHasBeenSet = true;
}

bool DBCustomNodeTypeInfo::NodeFamilyHasBeenSet() const
{
    return m_nodeFamilyHasBeenSet;
}

uint64_t DBCustomNodeTypeInfo::GetCPU() const
{
    return m_cPU;
}

void DBCustomNodeTypeInfo::SetCPU(const uint64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool DBCustomNodeTypeInfo::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

uint64_t DBCustomNodeTypeInfo::GetMemory() const
{
    return m_memory;
}

void DBCustomNodeTypeInfo::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DBCustomNodeTypeInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string DBCustomNodeTypeInfo::GetStatus() const
{
    return m_status;
}

void DBCustomNodeTypeInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBCustomNodeTypeInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DBCustomNodeTypeInfo::GetSystemDiskTypes() const
{
    return m_systemDiskTypes;
}

void DBCustomNodeTypeInfo::SetSystemDiskTypes(const vector<string>& _systemDiskTypes)
{
    m_systemDiskTypes = _systemDiskTypes;
    m_systemDiskTypesHasBeenSet = true;
}

bool DBCustomNodeTypeInfo::SystemDiskTypesHasBeenSet() const
{
    return m_systemDiskTypesHasBeenSet;
}

vector<string> DBCustomNodeTypeInfo::GetDataDiskTypes() const
{
    return m_dataDiskTypes;
}

void DBCustomNodeTypeInfo::SetDataDiskTypes(const vector<string>& _dataDiskTypes)
{
    m_dataDiskTypes = _dataDiskTypes;
    m_dataDiskTypesHasBeenSet = true;
}

bool DBCustomNodeTypeInfo::DataDiskTypesHasBeenSet() const
{
    return m_dataDiskTypesHasBeenSet;
}

