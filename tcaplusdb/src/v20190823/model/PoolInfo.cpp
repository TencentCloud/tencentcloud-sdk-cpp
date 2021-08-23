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

#include <tencentcloud/tcaplusdb/v20190823/model/PoolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

PoolInfo::PoolInfo() :
    m_poolUidHasBeenSet(false),
    m_ipv6EnableHasBeenSet(false),
    m_availableAppCountHasBeenSet(false),
    m_serverListHasBeenSet(false),
    m_proxyListHasBeenSet(false)
{
}

CoreInternalOutcome PoolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PoolUid") && !value["PoolUid"].IsNull())
    {
        if (!value["PoolUid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PoolInfo.PoolUid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_poolUid = value["PoolUid"].GetInt64();
        m_poolUidHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Enable") && !value["Ipv6Enable"].IsNull())
    {
        if (!value["Ipv6Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PoolInfo.Ipv6Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Enable = value["Ipv6Enable"].GetInt64();
        m_ipv6EnableHasBeenSet = true;
    }

    if (value.HasMember("AvailableAppCount") && !value["AvailableAppCount"].IsNull())
    {
        if (!value["AvailableAppCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PoolInfo.AvailableAppCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_availableAppCount = value["AvailableAppCount"].GetInt64();
        m_availableAppCountHasBeenSet = true;
    }

    if (value.HasMember("ServerList") && !value["ServerList"].IsNull())
    {
        if (!value["ServerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PoolInfo.ServerList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerMachineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serverList.push_back(item);
        }
        m_serverListHasBeenSet = true;
    }

    if (value.HasMember("ProxyList") && !value["ProxyList"].IsNull())
    {
        if (!value["ProxyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PoolInfo.ProxyList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyMachineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyList.push_back(item);
        }
        m_proxyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PoolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_poolUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoolUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_poolUid, allocator);
    }

    if (m_ipv6EnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6Enable, allocator);
    }

    if (m_availableAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableAppCount, allocator);
    }

    if (m_serverListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serverList.begin(); itr != m_serverList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_proxyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyList.begin(); itr != m_proxyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t PoolInfo::GetPoolUid() const
{
    return m_poolUid;
}

void PoolInfo::SetPoolUid(const int64_t& _poolUid)
{
    m_poolUid = _poolUid;
    m_poolUidHasBeenSet = true;
}

bool PoolInfo::PoolUidHasBeenSet() const
{
    return m_poolUidHasBeenSet;
}

int64_t PoolInfo::GetIpv6Enable() const
{
    return m_ipv6Enable;
}

void PoolInfo::SetIpv6Enable(const int64_t& _ipv6Enable)
{
    m_ipv6Enable = _ipv6Enable;
    m_ipv6EnableHasBeenSet = true;
}

bool PoolInfo::Ipv6EnableHasBeenSet() const
{
    return m_ipv6EnableHasBeenSet;
}

int64_t PoolInfo::GetAvailableAppCount() const
{
    return m_availableAppCount;
}

void PoolInfo::SetAvailableAppCount(const int64_t& _availableAppCount)
{
    m_availableAppCount = _availableAppCount;
    m_availableAppCountHasBeenSet = true;
}

bool PoolInfo::AvailableAppCountHasBeenSet() const
{
    return m_availableAppCountHasBeenSet;
}

vector<ServerMachineInfo> PoolInfo::GetServerList() const
{
    return m_serverList;
}

void PoolInfo::SetServerList(const vector<ServerMachineInfo>& _serverList)
{
    m_serverList = _serverList;
    m_serverListHasBeenSet = true;
}

bool PoolInfo::ServerListHasBeenSet() const
{
    return m_serverListHasBeenSet;
}

vector<ProxyMachineInfo> PoolInfo::GetProxyList() const
{
    return m_proxyList;
}

void PoolInfo::SetProxyList(const vector<ProxyMachineInfo>& _proxyList)
{
    m_proxyList = _proxyList;
    m_proxyListHasBeenSet = true;
}

bool PoolInfo::ProxyListHasBeenSet() const
{
    return m_proxyListHasBeenSet;
}

