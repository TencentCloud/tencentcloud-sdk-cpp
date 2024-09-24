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

#include <tencentcloud/postgres/v20170312/model/DedicatedCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DedicatedCluster::DedicatedCluster() :
    m_dedicatedClusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_standbyDedicatedClusterSetHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_cpuTotalHasBeenSet(false),
    m_cpuAvailableHasBeenSet(false),
    m_memTotalHasBeenSet(false),
    m_memAvailableHasBeenSet(false),
    m_diskTotalHasBeenSet(false),
    m_diskAvailableHasBeenSet(false)
{
}

CoreInternalOutcome DedicatedCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DedicatedClusterId") && !value["DedicatedClusterId"].IsNull())
    {
        if (!value["DedicatedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.DedicatedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterId = string(value["DedicatedClusterId"].GetString());
        m_dedicatedClusterIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("StandbyDedicatedClusterSet") && !value["StandbyDedicatedClusterSet"].IsNull())
    {
        if (!value["StandbyDedicatedClusterSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.StandbyDedicatedClusterSet` is not array type"));

        const rapidjson::Value &tmpValue = value["StandbyDedicatedClusterSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_standbyDedicatedClusterSet.push_back((*itr).GetString());
        }
        m_standbyDedicatedClusterSetHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("CpuTotal") && !value["CpuTotal"].IsNull())
    {
        if (!value["CpuTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.CpuTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTotal = value["CpuTotal"].GetInt64();
        m_cpuTotalHasBeenSet = true;
    }

    if (value.HasMember("CpuAvailable") && !value["CpuAvailable"].IsNull())
    {
        if (!value["CpuAvailable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.CpuAvailable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuAvailable = value["CpuAvailable"].GetInt64();
        m_cpuAvailableHasBeenSet = true;
    }

    if (value.HasMember("MemTotal") && !value["MemTotal"].IsNull())
    {
        if (!value["MemTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.MemTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memTotal = value["MemTotal"].GetInt64();
        m_memTotalHasBeenSet = true;
    }

    if (value.HasMember("MemAvailable") && !value["MemAvailable"].IsNull())
    {
        if (!value["MemAvailable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.MemAvailable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memAvailable = value["MemAvailable"].GetInt64();
        m_memAvailableHasBeenSet = true;
    }

    if (value.HasMember("DiskTotal") && !value["DiskTotal"].IsNull())
    {
        if (!value["DiskTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.DiskTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskTotal = value["DiskTotal"].GetInt64();
        m_diskTotalHasBeenSet = true;
    }

    if (value.HasMember("DiskAvailable") && !value["DiskAvailable"].IsNull())
    {
        if (!value["DiskAvailable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DedicatedCluster.DiskAvailable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskAvailable = value["DiskAvailable"].GetInt64();
        m_diskAvailableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DedicatedCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_standbyDedicatedClusterSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyDedicatedClusterSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_standbyDedicatedClusterSet.begin(); itr != m_standbyDedicatedClusterSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_cpuTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTotal, allocator);
    }

    if (m_cpuAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuAvailable, allocator);
    }

    if (m_memTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memTotal, allocator);
    }

    if (m_memAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memAvailable, allocator);
    }

    if (m_diskTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskTotal, allocator);
    }

    if (m_diskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskAvailable, allocator);
    }

}


string DedicatedCluster::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void DedicatedCluster::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool DedicatedCluster::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

string DedicatedCluster::GetName() const
{
    return m_name;
}

void DedicatedCluster::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DedicatedCluster::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DedicatedCluster::GetZone() const
{
    return m_zone;
}

void DedicatedCluster::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DedicatedCluster::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<string> DedicatedCluster::GetStandbyDedicatedClusterSet() const
{
    return m_standbyDedicatedClusterSet;
}

void DedicatedCluster::SetStandbyDedicatedClusterSet(const vector<string>& _standbyDedicatedClusterSet)
{
    m_standbyDedicatedClusterSet = _standbyDedicatedClusterSet;
    m_standbyDedicatedClusterSetHasBeenSet = true;
}

bool DedicatedCluster::StandbyDedicatedClusterSetHasBeenSet() const
{
    return m_standbyDedicatedClusterSetHasBeenSet;
}

int64_t DedicatedCluster::GetInstanceCount() const
{
    return m_instanceCount;
}

void DedicatedCluster::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool DedicatedCluster::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

int64_t DedicatedCluster::GetCpuTotal() const
{
    return m_cpuTotal;
}

void DedicatedCluster::SetCpuTotal(const int64_t& _cpuTotal)
{
    m_cpuTotal = _cpuTotal;
    m_cpuTotalHasBeenSet = true;
}

bool DedicatedCluster::CpuTotalHasBeenSet() const
{
    return m_cpuTotalHasBeenSet;
}

int64_t DedicatedCluster::GetCpuAvailable() const
{
    return m_cpuAvailable;
}

void DedicatedCluster::SetCpuAvailable(const int64_t& _cpuAvailable)
{
    m_cpuAvailable = _cpuAvailable;
    m_cpuAvailableHasBeenSet = true;
}

bool DedicatedCluster::CpuAvailableHasBeenSet() const
{
    return m_cpuAvailableHasBeenSet;
}

int64_t DedicatedCluster::GetMemTotal() const
{
    return m_memTotal;
}

void DedicatedCluster::SetMemTotal(const int64_t& _memTotal)
{
    m_memTotal = _memTotal;
    m_memTotalHasBeenSet = true;
}

bool DedicatedCluster::MemTotalHasBeenSet() const
{
    return m_memTotalHasBeenSet;
}

int64_t DedicatedCluster::GetMemAvailable() const
{
    return m_memAvailable;
}

void DedicatedCluster::SetMemAvailable(const int64_t& _memAvailable)
{
    m_memAvailable = _memAvailable;
    m_memAvailableHasBeenSet = true;
}

bool DedicatedCluster::MemAvailableHasBeenSet() const
{
    return m_memAvailableHasBeenSet;
}

int64_t DedicatedCluster::GetDiskTotal() const
{
    return m_diskTotal;
}

void DedicatedCluster::SetDiskTotal(const int64_t& _diskTotal)
{
    m_diskTotal = _diskTotal;
    m_diskTotalHasBeenSet = true;
}

bool DedicatedCluster::DiskTotalHasBeenSet() const
{
    return m_diskTotalHasBeenSet;
}

int64_t DedicatedCluster::GetDiskAvailable() const
{
    return m_diskAvailable;
}

void DedicatedCluster::SetDiskAvailable(const int64_t& _diskAvailable)
{
    m_diskAvailable = _diskAvailable;
    m_diskAvailableHasBeenSet = true;
}

bool DedicatedCluster::DiskAvailableHasBeenSet() const
{
    return m_diskAvailableHasBeenSet;
}

