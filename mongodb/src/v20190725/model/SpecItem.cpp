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

#include <tencentcloud/mongodb/v20190725/model/SpecItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

SpecItem::SpecItem() :
    m_specCodeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_defaultStorageHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_minStorageHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_connsHasBeenSet(false),
    m_mongoVersionCodeHasBeenSet(false),
    m_mongoVersionValueHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_minNodeNumHasBeenSet(false),
    m_maxNodeNumHasBeenSet(false),
    m_minReplicateSetNumHasBeenSet(false),
    m_maxReplicateSetNumHasBeenSet(false),
    m_minReplicateSetNodeNumHasBeenSet(false),
    m_maxReplicateSetNodeNumHasBeenSet(false),
    m_machineTypeHasBeenSet(false)
{
}

CoreInternalOutcome SpecItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SpecCode") && !value["SpecCode"].IsNull())
    {
        if (!value["SpecCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.SpecCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specCode = string(value["SpecCode"].GetString());
        m_specCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("DefaultStorage") && !value["DefaultStorage"].IsNull())
    {
        if (!value["DefaultStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.DefaultStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultStorage = value["DefaultStorage"].GetUint64();
        m_defaultStorageHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MaxStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetUint64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("MinStorage") && !value["MinStorage"].IsNull())
    {
        if (!value["MinStorage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MinStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorage = value["MinStorage"].GetUint64();
        m_minStorageHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Conns") && !value["Conns"].IsNull())
    {
        if (!value["Conns"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.Conns` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_conns = value["Conns"].GetUint64();
        m_connsHasBeenSet = true;
    }

    if (value.HasMember("MongoVersionCode") && !value["MongoVersionCode"].IsNull())
    {
        if (!value["MongoVersionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MongoVersionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mongoVersionCode = string(value["MongoVersionCode"].GetString());
        m_mongoVersionCodeHasBeenSet = true;
    }

    if (value.HasMember("MongoVersionValue") && !value["MongoVersionValue"].IsNull())
    {
        if (!value["MongoVersionValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MongoVersionValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongoVersionValue = value["MongoVersionValue"].GetUint64();
        m_mongoVersionValueHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("EngineName") && !value["EngineName"].IsNull())
    {
        if (!value["EngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.EngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineName = string(value["EngineName"].GetString());
        m_engineNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.ClusterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetUint64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("MinNodeNum") && !value["MinNodeNum"].IsNull())
    {
        if (!value["MinNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MinNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minNodeNum = value["MinNodeNum"].GetUint64();
        m_minNodeNumHasBeenSet = true;
    }

    if (value.HasMember("MaxNodeNum") && !value["MaxNodeNum"].IsNull())
    {
        if (!value["MaxNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MaxNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodeNum = value["MaxNodeNum"].GetUint64();
        m_maxNodeNumHasBeenSet = true;
    }

    if (value.HasMember("MinReplicateSetNum") && !value["MinReplicateSetNum"].IsNull())
    {
        if (!value["MinReplicateSetNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MinReplicateSetNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicateSetNum = value["MinReplicateSetNum"].GetUint64();
        m_minReplicateSetNumHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicateSetNum") && !value["MaxReplicateSetNum"].IsNull())
    {
        if (!value["MaxReplicateSetNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MaxReplicateSetNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicateSetNum = value["MaxReplicateSetNum"].GetUint64();
        m_maxReplicateSetNumHasBeenSet = true;
    }

    if (value.HasMember("MinReplicateSetNodeNum") && !value["MinReplicateSetNodeNum"].IsNull())
    {
        if (!value["MinReplicateSetNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MinReplicateSetNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicateSetNodeNum = value["MinReplicateSetNodeNum"].GetUint64();
        m_minReplicateSetNodeNumHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicateSetNodeNum") && !value["MaxReplicateSetNodeNum"].IsNull())
    {
        if (!value["MaxReplicateSetNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MaxReplicateSetNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicateSetNodeNum = value["MaxReplicateSetNodeNum"].GetUint64();
        m_maxReplicateSetNodeNumHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecItem.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_defaultStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultStorage, allocator);
    }

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_minStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorage, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_connsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conns, allocator);
    }

    if (m_mongoVersionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mongoVersionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoVersionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongoVersionValue, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_minNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNodeNum, allocator);
    }

    if (m_maxNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodeNum, allocator);
    }

    if (m_minReplicateSetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicateSetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicateSetNum, allocator);
    }

    if (m_maxReplicateSetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicateSetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicateSetNum, allocator);
    }

    if (m_minReplicateSetNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicateSetNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicateSetNodeNum, allocator);
    }

    if (m_maxReplicateSetNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicateSetNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicateSetNodeNum, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

}


string SpecItem::GetSpecCode() const
{
    return m_specCode;
}

void SpecItem::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool SpecItem::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

uint64_t SpecItem::GetStatus() const
{
    return m_status;
}

void SpecItem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SpecItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t SpecItem::GetCpu() const
{
    return m_cpu;
}

void SpecItem::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool SpecItem::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t SpecItem::GetMemory() const
{
    return m_memory;
}

void SpecItem::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool SpecItem::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t SpecItem::GetDefaultStorage() const
{
    return m_defaultStorage;
}

void SpecItem::SetDefaultStorage(const uint64_t& _defaultStorage)
{
    m_defaultStorage = _defaultStorage;
    m_defaultStorageHasBeenSet = true;
}

bool SpecItem::DefaultStorageHasBeenSet() const
{
    return m_defaultStorageHasBeenSet;
}

uint64_t SpecItem::GetMaxStorage() const
{
    return m_maxStorage;
}

void SpecItem::SetMaxStorage(const uint64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool SpecItem::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

uint64_t SpecItem::GetMinStorage() const
{
    return m_minStorage;
}

void SpecItem::SetMinStorage(const uint64_t& _minStorage)
{
    m_minStorage = _minStorage;
    m_minStorageHasBeenSet = true;
}

bool SpecItem::MinStorageHasBeenSet() const
{
    return m_minStorageHasBeenSet;
}

uint64_t SpecItem::GetQps() const
{
    return m_qps;
}

void SpecItem::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool SpecItem::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

uint64_t SpecItem::GetConns() const
{
    return m_conns;
}

void SpecItem::SetConns(const uint64_t& _conns)
{
    m_conns = _conns;
    m_connsHasBeenSet = true;
}

bool SpecItem::ConnsHasBeenSet() const
{
    return m_connsHasBeenSet;
}

string SpecItem::GetMongoVersionCode() const
{
    return m_mongoVersionCode;
}

void SpecItem::SetMongoVersionCode(const string& _mongoVersionCode)
{
    m_mongoVersionCode = _mongoVersionCode;
    m_mongoVersionCodeHasBeenSet = true;
}

bool SpecItem::MongoVersionCodeHasBeenSet() const
{
    return m_mongoVersionCodeHasBeenSet;
}

uint64_t SpecItem::GetMongoVersionValue() const
{
    return m_mongoVersionValue;
}

void SpecItem::SetMongoVersionValue(const uint64_t& _mongoVersionValue)
{
    m_mongoVersionValue = _mongoVersionValue;
    m_mongoVersionValueHasBeenSet = true;
}

bool SpecItem::MongoVersionValueHasBeenSet() const
{
    return m_mongoVersionValueHasBeenSet;
}

string SpecItem::GetVersion() const
{
    return m_version;
}

void SpecItem::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool SpecItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string SpecItem::GetEngineName() const
{
    return m_engineName;
}

void SpecItem::SetEngineName(const string& _engineName)
{
    m_engineName = _engineName;
    m_engineNameHasBeenSet = true;
}

bool SpecItem::EngineNameHasBeenSet() const
{
    return m_engineNameHasBeenSet;
}

uint64_t SpecItem::GetClusterType() const
{
    return m_clusterType;
}

void SpecItem::SetClusterType(const uint64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool SpecItem::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

uint64_t SpecItem::GetMinNodeNum() const
{
    return m_minNodeNum;
}

void SpecItem::SetMinNodeNum(const uint64_t& _minNodeNum)
{
    m_minNodeNum = _minNodeNum;
    m_minNodeNumHasBeenSet = true;
}

bool SpecItem::MinNodeNumHasBeenSet() const
{
    return m_minNodeNumHasBeenSet;
}

uint64_t SpecItem::GetMaxNodeNum() const
{
    return m_maxNodeNum;
}

void SpecItem::SetMaxNodeNum(const uint64_t& _maxNodeNum)
{
    m_maxNodeNum = _maxNodeNum;
    m_maxNodeNumHasBeenSet = true;
}

bool SpecItem::MaxNodeNumHasBeenSet() const
{
    return m_maxNodeNumHasBeenSet;
}

uint64_t SpecItem::GetMinReplicateSetNum() const
{
    return m_minReplicateSetNum;
}

void SpecItem::SetMinReplicateSetNum(const uint64_t& _minReplicateSetNum)
{
    m_minReplicateSetNum = _minReplicateSetNum;
    m_minReplicateSetNumHasBeenSet = true;
}

bool SpecItem::MinReplicateSetNumHasBeenSet() const
{
    return m_minReplicateSetNumHasBeenSet;
}

uint64_t SpecItem::GetMaxReplicateSetNum() const
{
    return m_maxReplicateSetNum;
}

void SpecItem::SetMaxReplicateSetNum(const uint64_t& _maxReplicateSetNum)
{
    m_maxReplicateSetNum = _maxReplicateSetNum;
    m_maxReplicateSetNumHasBeenSet = true;
}

bool SpecItem::MaxReplicateSetNumHasBeenSet() const
{
    return m_maxReplicateSetNumHasBeenSet;
}

uint64_t SpecItem::GetMinReplicateSetNodeNum() const
{
    return m_minReplicateSetNodeNum;
}

void SpecItem::SetMinReplicateSetNodeNum(const uint64_t& _minReplicateSetNodeNum)
{
    m_minReplicateSetNodeNum = _minReplicateSetNodeNum;
    m_minReplicateSetNodeNumHasBeenSet = true;
}

bool SpecItem::MinReplicateSetNodeNumHasBeenSet() const
{
    return m_minReplicateSetNodeNumHasBeenSet;
}

uint64_t SpecItem::GetMaxReplicateSetNodeNum() const
{
    return m_maxReplicateSetNodeNum;
}

void SpecItem::SetMaxReplicateSetNodeNum(const uint64_t& _maxReplicateSetNodeNum)
{
    m_maxReplicateSetNodeNum = _maxReplicateSetNodeNum;
    m_maxReplicateSetNodeNumHasBeenSet = true;
}

bool SpecItem::MaxReplicateSetNodeNumHasBeenSet() const
{
    return m_maxReplicateSetNodeNumHasBeenSet;
}

string SpecItem::GetMachineType() const
{
    return m_machineType;
}

void SpecItem::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool SpecItem::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

