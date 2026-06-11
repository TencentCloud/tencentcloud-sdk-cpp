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

#include <tencentcloud/oceanus/v20190422/model/HiveMetastoreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

HiveMetastoreInfo::HiveMetastoreInfo() :
    m_hiveMetastoreSerialIdHasBeenSet(false),
    m_clusterGroupSerialIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memGBHasBeenSet(false),
    m_replicaHasBeenSet(false),
    m_hiveUriHasBeenSet(false),
    m_hiveNamespaceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_hiveMetastoreWarehouseDirHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

CoreInternalOutcome HiveMetastoreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HiveMetastoreSerialId") && !value["HiveMetastoreSerialId"].IsNull())
    {
        if (!value["HiveMetastoreSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.HiveMetastoreSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveMetastoreSerialId = string(value["HiveMetastoreSerialId"].GetString());
        m_hiveMetastoreSerialIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterGroupSerialId") && !value["ClusterGroupSerialId"].IsNull())
    {
        if (!value["ClusterGroupSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.ClusterGroupSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterGroupSerialId = string(value["ClusterGroupSerialId"].GetString());
        m_clusterGroupSerialIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("MemGB") && !value["MemGB"].IsNull())
    {
        if (!value["MemGB"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.MemGB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memGB = value["MemGB"].GetInt64();
        m_memGBHasBeenSet = true;
    }

    if (value.HasMember("Replica") && !value["Replica"].IsNull())
    {
        if (!value["Replica"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.Replica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replica = value["Replica"].GetInt64();
        m_replicaHasBeenSet = true;
    }

    if (value.HasMember("HiveUri") && !value["HiveUri"].IsNull())
    {
        if (!value["HiveUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.HiveUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveUri = string(value["HiveUri"].GetString());
        m_hiveUriHasBeenSet = true;
    }

    if (value.HasMember("HiveNamespace") && !value["HiveNamespace"].IsNull())
    {
        if (!value["HiveNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.HiveNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveNamespace = string(value["HiveNamespace"].GetString());
        m_hiveNamespaceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("HiveMetastoreWarehouseDir") && !value["HiveMetastoreWarehouseDir"].IsNull())
    {
        if (!value["HiveMetastoreWarehouseDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.HiveMetastoreWarehouseDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveMetastoreWarehouseDir = string(value["HiveMetastoreWarehouseDir"].GetString());
        m_hiveMetastoreWarehouseDirHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HiveMetastoreInfo.Config` is not array type"));

        const rapidjson::Value &tmpValue = value["Config"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_config.push_back(item);
        }
        m_configHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HiveMetastoreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hiveMetastoreSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveMetastoreSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveMetastoreSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterGroupSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterGroupSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterGroupSerialId.c_str(), allocator).Move(), allocator);
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

    if (m_memGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memGB, allocator);
    }

    if (m_replicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replica, allocator);
    }

    if (m_hiveUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveUri.c_str(), allocator).Move(), allocator);
    }

    if (m_hiveNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hiveMetastoreWarehouseDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HiveMetastoreWarehouseDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hiveMetastoreWarehouseDir.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_config.begin(); itr != m_config.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HiveMetastoreInfo::GetHiveMetastoreSerialId() const
{
    return m_hiveMetastoreSerialId;
}

void HiveMetastoreInfo::SetHiveMetastoreSerialId(const string& _hiveMetastoreSerialId)
{
    m_hiveMetastoreSerialId = _hiveMetastoreSerialId;
    m_hiveMetastoreSerialIdHasBeenSet = true;
}

bool HiveMetastoreInfo::HiveMetastoreSerialIdHasBeenSet() const
{
    return m_hiveMetastoreSerialIdHasBeenSet;
}

string HiveMetastoreInfo::GetClusterGroupSerialId() const
{
    return m_clusterGroupSerialId;
}

void HiveMetastoreInfo::SetClusterGroupSerialId(const string& _clusterGroupSerialId)
{
    m_clusterGroupSerialId = _clusterGroupSerialId;
    m_clusterGroupSerialIdHasBeenSet = true;
}

bool HiveMetastoreInfo::ClusterGroupSerialIdHasBeenSet() const
{
    return m_clusterGroupSerialIdHasBeenSet;
}

int64_t HiveMetastoreInfo::GetStatus() const
{
    return m_status;
}

void HiveMetastoreInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HiveMetastoreInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t HiveMetastoreInfo::GetCpu() const
{
    return m_cpu;
}

void HiveMetastoreInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool HiveMetastoreInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t HiveMetastoreInfo::GetMemGB() const
{
    return m_memGB;
}

void HiveMetastoreInfo::SetMemGB(const int64_t& _memGB)
{
    m_memGB = _memGB;
    m_memGBHasBeenSet = true;
}

bool HiveMetastoreInfo::MemGBHasBeenSet() const
{
    return m_memGBHasBeenSet;
}

int64_t HiveMetastoreInfo::GetReplica() const
{
    return m_replica;
}

void HiveMetastoreInfo::SetReplica(const int64_t& _replica)
{
    m_replica = _replica;
    m_replicaHasBeenSet = true;
}

bool HiveMetastoreInfo::ReplicaHasBeenSet() const
{
    return m_replicaHasBeenSet;
}

string HiveMetastoreInfo::GetHiveUri() const
{
    return m_hiveUri;
}

void HiveMetastoreInfo::SetHiveUri(const string& _hiveUri)
{
    m_hiveUri = _hiveUri;
    m_hiveUriHasBeenSet = true;
}

bool HiveMetastoreInfo::HiveUriHasBeenSet() const
{
    return m_hiveUriHasBeenSet;
}

string HiveMetastoreInfo::GetHiveNamespace() const
{
    return m_hiveNamespace;
}

void HiveMetastoreInfo::SetHiveNamespace(const string& _hiveNamespace)
{
    m_hiveNamespace = _hiveNamespace;
    m_hiveNamespaceHasBeenSet = true;
}

bool HiveMetastoreInfo::HiveNamespaceHasBeenSet() const
{
    return m_hiveNamespaceHasBeenSet;
}

string HiveMetastoreInfo::GetCreateTime() const
{
    return m_createTime;
}

void HiveMetastoreInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HiveMetastoreInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HiveMetastoreInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void HiveMetastoreInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool HiveMetastoreInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string HiveMetastoreInfo::GetHiveMetastoreWarehouseDir() const
{
    return m_hiveMetastoreWarehouseDir;
}

void HiveMetastoreInfo::SetHiveMetastoreWarehouseDir(const string& _hiveMetastoreWarehouseDir)
{
    m_hiveMetastoreWarehouseDir = _hiveMetastoreWarehouseDir;
    m_hiveMetastoreWarehouseDirHasBeenSet = true;
}

bool HiveMetastoreInfo::HiveMetastoreWarehouseDirHasBeenSet() const
{
    return m_hiveMetastoreWarehouseDirHasBeenSet;
}

vector<Property> HiveMetastoreInfo::GetConfig() const
{
    return m_config;
}

void HiveMetastoreInfo::SetConfig(const vector<Property>& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool HiveMetastoreInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

