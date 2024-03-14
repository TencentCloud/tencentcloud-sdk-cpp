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

#include <tencentcloud/cynosdb/v20190107/model/UpgradeProxy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

UpgradeProxy::UpgradeProxy() :
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_proxyZonesHasBeenSet(false),
    m_reloadBalanceHasBeenSet(false)
{
}

CoreInternalOutcome UpgradeProxy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeProxy.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeProxy.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("ProxyZones") && !value["ProxyZones"].IsNull())
    {
        if (!value["ProxyZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpgradeProxy.ProxyZones` is not array type"));

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

    if (value.HasMember("ReloadBalance") && !value["ReloadBalance"].IsNull())
    {
        if (!value["ReloadBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeProxy.ReloadBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reloadBalance = string(value["ReloadBalance"].GetString());
        m_reloadBalanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpgradeProxy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_reloadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReloadBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reloadBalance.c_str(), allocator).Move(), allocator);
    }

}


int64_t UpgradeProxy::GetCpu() const
{
    return m_cpu;
}

void UpgradeProxy::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool UpgradeProxy::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t UpgradeProxy::GetMem() const
{
    return m_mem;
}

void UpgradeProxy::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool UpgradeProxy::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

vector<ProxyZone> UpgradeProxy::GetProxyZones() const
{
    return m_proxyZones;
}

void UpgradeProxy::SetProxyZones(const vector<ProxyZone>& _proxyZones)
{
    m_proxyZones = _proxyZones;
    m_proxyZonesHasBeenSet = true;
}

bool UpgradeProxy::ProxyZonesHasBeenSet() const
{
    return m_proxyZonesHasBeenSet;
}

string UpgradeProxy::GetReloadBalance() const
{
    return m_reloadBalance;
}

void UpgradeProxy::SetReloadBalance(const string& _reloadBalance)
{
    m_reloadBalance = _reloadBalance;
    m_reloadBalanceHasBeenSet = true;
}

bool UpgradeProxy::ReloadBalanceHasBeenSet() const
{
    return m_reloadBalanceHasBeenSet;
}

