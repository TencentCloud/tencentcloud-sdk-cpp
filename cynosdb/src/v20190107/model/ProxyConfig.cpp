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

#include <tencentcloud/cynosdb/v20190107/model/ProxyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyConfig::ProxyConfig() :
    m_proxyCountHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false),
    m_openConnectionPoolHasBeenSet(false),
    m_connectionPoolTimeOutHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_proxyZonesHasBeenSet(false)
{
}

CoreInternalOutcome ProxyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyCount") && !value["ProxyCount"].IsNull())
    {
        if (!value["ProxyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfig.ProxyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyCount = value["ProxyCount"].GetInt64();
        m_proxyCountHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfig.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfig.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolType") && !value["ConnectionPoolType"].IsNull())
    {
        if (!value["ConnectionPoolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfig.ConnectionPoolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolType = string(value["ConnectionPoolType"].GetString());
        m_connectionPoolTypeHasBeenSet = true;
    }

    if (value.HasMember("OpenConnectionPool") && !value["OpenConnectionPool"].IsNull())
    {
        if (!value["OpenConnectionPool"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfig.OpenConnectionPool` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openConnectionPool = string(value["OpenConnectionPool"].GetString());
        m_openConnectionPoolHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolTimeOut") && !value["ConnectionPoolTimeOut"].IsNull())
    {
        if (!value["ConnectionPoolTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfig.ConnectionPoolTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolTimeOut = value["ConnectionPoolTimeOut"].GetInt64();
        m_connectionPoolTimeOutHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfig.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ProxyZones") && !value["ProxyZones"].IsNull())
    {
        if (!value["ProxyZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyConfig.ProxyZones` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyZone item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyZones.push_back(item);
        }
        m_proxyZonesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyCount, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
    }

    if (m_openConnectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openConnectionPool.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionPoolTimeOut, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyZones.begin(); itr != m_proxyZones.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ProxyConfig::GetProxyCount() const
{
    return m_proxyCount;
}

void ProxyConfig::SetProxyCount(const int64_t& _proxyCount)
{
    m_proxyCount = _proxyCount;
    m_proxyCountHasBeenSet = true;
}

bool ProxyConfig::ProxyCountHasBeenSet() const
{
    return m_proxyCountHasBeenSet;
}

int64_t ProxyConfig::GetCpu() const
{
    return m_cpu;
}

void ProxyConfig::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ProxyConfig::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ProxyConfig::GetMem() const
{
    return m_mem;
}

void ProxyConfig::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ProxyConfig::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string ProxyConfig::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void ProxyConfig::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool ProxyConfig::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

string ProxyConfig::GetOpenConnectionPool() const
{
    return m_openConnectionPool;
}

void ProxyConfig::SetOpenConnectionPool(const string& _openConnectionPool)
{
    m_openConnectionPool = _openConnectionPool;
    m_openConnectionPoolHasBeenSet = true;
}

bool ProxyConfig::OpenConnectionPoolHasBeenSet() const
{
    return m_openConnectionPoolHasBeenSet;
}

int64_t ProxyConfig::GetConnectionPoolTimeOut() const
{
    return m_connectionPoolTimeOut;
}

void ProxyConfig::SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut)
{
    m_connectionPoolTimeOut = _connectionPoolTimeOut;
    m_connectionPoolTimeOutHasBeenSet = true;
}

bool ProxyConfig::ConnectionPoolTimeOutHasBeenSet() const
{
    return m_connectionPoolTimeOutHasBeenSet;
}

string ProxyConfig::GetDescription() const
{
    return m_description;
}

void ProxyConfig::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ProxyConfig::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ProxyZone> ProxyConfig::GetProxyZones() const
{
    return m_proxyZones;
}

void ProxyConfig::SetProxyZones(const vector<ProxyZone>& _proxyZones)
{
    m_proxyZones = _proxyZones;
    m_proxyZonesHasBeenSet = true;
}

bool ProxyConfig::ProxyZonesHasBeenSet() const
{
    return m_proxyZonesHasBeenSet;
}

