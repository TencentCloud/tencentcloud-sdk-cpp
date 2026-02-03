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

#include <tencentcloud/cynosdb/v20190107/model/LibraDBInstanceInitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

LibraDBInstanceInitInfo::LibraDBInstanceInitInfo() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_libraDBVersionHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_replicasNumHasBeenSet(false)
{
}

CoreInternalOutcome LibraDBInstanceInitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("LibraDBVersion") && !value["LibraDBVersion"].IsNull())
    {
        if (!value["LibraDBVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.LibraDBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraDBVersion = string(value["LibraDBVersion"].GetString());
        m_libraDBVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ReplicasNum") && !value["ReplicasNum"].IsNull())
    {
        if (!value["ReplicasNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBInstanceInitInfo.ReplicasNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicasNum = value["ReplicasNum"].GetInt64();
        m_replicasNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LibraDBInstanceInitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_libraDBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraDBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraDBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_replicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicasNum, allocator);
    }

}


int64_t LibraDBInstanceInitInfo::GetCpu() const
{
    return m_cpu;
}

void LibraDBInstanceInitInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t LibraDBInstanceInitInfo::GetMemory() const
{
    return m_memory;
}

void LibraDBInstanceInitInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t LibraDBInstanceInitInfo::GetStorageSize() const
{
    return m_storageSize;
}

void LibraDBInstanceInitInfo::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

string LibraDBInstanceInitInfo::GetStorageType() const
{
    return m_storageType;
}

void LibraDBInstanceInitInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string LibraDBInstanceInitInfo::GetInstanceType() const
{
    return m_instanceType;
}

void LibraDBInstanceInitInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string LibraDBInstanceInitInfo::GetLibraDBVersion() const
{
    return m_libraDBVersion;
}

void LibraDBInstanceInitInfo::SetLibraDBVersion(const string& _libraDBVersion)
{
    m_libraDBVersion = _libraDBVersion;
    m_libraDBVersionHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::LibraDBVersionHasBeenSet() const
{
    return m_libraDBVersionHasBeenSet;
}

int64_t LibraDBInstanceInitInfo::GetInstanceCount() const
{
    return m_instanceCount;
}

void LibraDBInstanceInitInfo::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string LibraDBInstanceInitInfo::GetVpcId() const
{
    return m_vpcId;
}

void LibraDBInstanceInitInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string LibraDBInstanceInitInfo::GetSubnetId() const
{
    return m_subnetId;
}

void LibraDBInstanceInitInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t LibraDBInstanceInitInfo::GetPort() const
{
    return m_port;
}

void LibraDBInstanceInitInfo::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

int64_t LibraDBInstanceInitInfo::GetReplicasNum() const
{
    return m_replicasNum;
}

void LibraDBInstanceInitInfo::SetReplicasNum(const int64_t& _replicasNum)
{
    m_replicasNum = _replicasNum;
    m_replicasNumHasBeenSet = true;
}

bool LibraDBInstanceInitInfo::ReplicasNumHasBeenSet() const
{
    return m_replicasNumHasBeenSet;
}

