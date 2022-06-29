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

#include <tencentcloud/cdb/v20170320/model/UpgradeCDBProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

UpgradeCDBProxyRequest::UpgradeCDBProxyRequest() :
    m_instanceIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_proxyCountHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_reloadBalanceHasBeenSet(false),
    m_upgradeTimeHasBeenSet(false)
{
}

string UpgradeCDBProxyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxyCount, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mem, allocator);
    }

    if (m_reloadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReloadBalance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reloadBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeCDBProxyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeCDBProxyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeCDBProxyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeCDBProxyRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void UpgradeCDBProxyRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool UpgradeCDBProxyRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

int64_t UpgradeCDBProxyRequest::GetProxyCount() const
{
    return m_proxyCount;
}

void UpgradeCDBProxyRequest::SetProxyCount(const int64_t& _proxyCount)
{
    m_proxyCount = _proxyCount;
    m_proxyCountHasBeenSet = true;
}

bool UpgradeCDBProxyRequest::ProxyCountHasBeenSet() const
{
    return m_proxyCountHasBeenSet;
}

int64_t UpgradeCDBProxyRequest::GetCpu() const
{
    return m_cpu;
}

void UpgradeCDBProxyRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool UpgradeCDBProxyRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t UpgradeCDBProxyRequest::GetMem() const
{
    return m_mem;
}

void UpgradeCDBProxyRequest::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool UpgradeCDBProxyRequest::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string UpgradeCDBProxyRequest::GetReloadBalance() const
{
    return m_reloadBalance;
}

void UpgradeCDBProxyRequest::SetReloadBalance(const string& _reloadBalance)
{
    m_reloadBalance = _reloadBalance;
    m_reloadBalanceHasBeenSet = true;
}

bool UpgradeCDBProxyRequest::ReloadBalanceHasBeenSet() const
{
    return m_reloadBalanceHasBeenSet;
}

string UpgradeCDBProxyRequest::GetUpgradeTime() const
{
    return m_upgradeTime;
}

void UpgradeCDBProxyRequest::SetUpgradeTime(const string& _upgradeTime)
{
    m_upgradeTime = _upgradeTime;
    m_upgradeTimeHasBeenSet = true;
}

bool UpgradeCDBProxyRequest::UpgradeTimeHasBeenSet() const
{
    return m_upgradeTimeHasBeenSet;
}


