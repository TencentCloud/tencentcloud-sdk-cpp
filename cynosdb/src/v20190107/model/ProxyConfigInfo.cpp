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

#include <tencentcloud/cynosdb/v20190107/model/ProxyConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyConfigInfo::ProxyConfigInfo() :
    m_proxyCountHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_proxyZonesHasBeenSet(false)
{
}

CoreInternalOutcome ProxyConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyCount") && !value["ProxyCount"].IsNull())
    {
        if (!value["ProxyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfigInfo.ProxyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyCount = value["ProxyCount"].GetInt64();
        m_proxyCountHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfigInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfigInfo.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyConfigInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ProxyZones") && !value["ProxyZones"].IsNull())
    {
        if (!value["ProxyZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyConfigInfo.ProxyZones` is not array type"));

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

void ProxyConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


int64_t ProxyConfigInfo::GetProxyCount() const
{
    return m_proxyCount;
}

void ProxyConfigInfo::SetProxyCount(const int64_t& _proxyCount)
{
    m_proxyCount = _proxyCount;
    m_proxyCountHasBeenSet = true;
}

bool ProxyConfigInfo::ProxyCountHasBeenSet() const
{
    return m_proxyCountHasBeenSet;
}

int64_t ProxyConfigInfo::GetCpu() const
{
    return m_cpu;
}

void ProxyConfigInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ProxyConfigInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ProxyConfigInfo::GetMem() const
{
    return m_mem;
}

void ProxyConfigInfo::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool ProxyConfigInfo::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string ProxyConfigInfo::GetDescription() const
{
    return m_description;
}

void ProxyConfigInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ProxyConfigInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ProxyZone> ProxyConfigInfo::GetProxyZones() const
{
    return m_proxyZones;
}

void ProxyConfigInfo::SetProxyZones(const vector<ProxyZone>& _proxyZones)
{
    m_proxyZones = _proxyZones;
    m_proxyZonesHasBeenSet = true;
}

bool ProxyConfigInfo::ProxyZonesHasBeenSet() const
{
    return m_proxyZonesHasBeenSet;
}

