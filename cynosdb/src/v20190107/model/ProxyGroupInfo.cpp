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

#include <tencentcloud/cynosdb/v20190107/model/ProxyGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyGroupInfo::ProxyGroupInfo() :
    m_proxyGroupHasBeenSet(false),
    m_proxyGroupRwInfoHasBeenSet(false),
    m_proxyNodesHasBeenSet(false),
    m_connectionPoolHasBeenSet(false),
    m_netAddrInfosHasBeenSet(false),
    m_tasksHasBeenSet(false)
{
}

CoreInternalOutcome ProxyGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyGroup") && !value["ProxyGroup"].IsNull())
    {
        if (!value["ProxyGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_proxyGroup.Deserialize(value["ProxyGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_proxyGroupHasBeenSet = true;
    }

    if (value.HasMember("ProxyGroupRwInfo") && !value["ProxyGroupRwInfo"].IsNull())
    {
        if (!value["ProxyGroupRwInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyGroupRwInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_proxyGroupRwInfo.Deserialize(value["ProxyGroupRwInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_proxyGroupRwInfoHasBeenSet = true;
    }

    if (value.HasMember("ProxyNodes") && !value["ProxyNodes"].IsNull())
    {
        if (!value["ProxyNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ProxyNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyNodes.push_back(item);
        }
        m_proxyNodesHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPool") && !value["ConnectionPool"].IsNull())
    {
        if (!value["ConnectionPool"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.ConnectionPool` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connectionPool.Deserialize(value["ConnectionPool"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connectionPoolHasBeenSet = true;
    }

    if (value.HasMember("NetAddrInfos") && !value["NetAddrInfos"].IsNull())
    {
        if (!value["NetAddrInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.NetAddrInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["NetAddrInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetAddr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_netAddrInfos.push_back(item);
        }
        m_netAddrInfosHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupInfo.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_proxyGroup.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_proxyGroupRwInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupRwInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_proxyGroupRwInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_proxyNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyNodes.begin(); itr != m_proxyNodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_connectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connectionPool.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_netAddrInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAddrInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_netAddrInfos.begin(); itr != m_netAddrInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ProxyGroup ProxyGroupInfo::GetProxyGroup() const
{
    return m_proxyGroup;
}

void ProxyGroupInfo::SetProxyGroup(const ProxyGroup& _proxyGroup)
{
    m_proxyGroup = _proxyGroup;
    m_proxyGroupHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyGroupHasBeenSet() const
{
    return m_proxyGroupHasBeenSet;
}

ProxyGroupRwInfo ProxyGroupInfo::GetProxyGroupRwInfo() const
{
    return m_proxyGroupRwInfo;
}

void ProxyGroupInfo::SetProxyGroupRwInfo(const ProxyGroupRwInfo& _proxyGroupRwInfo)
{
    m_proxyGroupRwInfo = _proxyGroupRwInfo;
    m_proxyGroupRwInfoHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyGroupRwInfoHasBeenSet() const
{
    return m_proxyGroupRwInfoHasBeenSet;
}

vector<ProxyNodeInfo> ProxyGroupInfo::GetProxyNodes() const
{
    return m_proxyNodes;
}

void ProxyGroupInfo::SetProxyNodes(const vector<ProxyNodeInfo>& _proxyNodes)
{
    m_proxyNodes = _proxyNodes;
    m_proxyNodesHasBeenSet = true;
}

bool ProxyGroupInfo::ProxyNodesHasBeenSet() const
{
    return m_proxyNodesHasBeenSet;
}

ProxyConnectionPoolInfo ProxyGroupInfo::GetConnectionPool() const
{
    return m_connectionPool;
}

void ProxyGroupInfo::SetConnectionPool(const ProxyConnectionPoolInfo& _connectionPool)
{
    m_connectionPool = _connectionPool;
    m_connectionPoolHasBeenSet = true;
}

bool ProxyGroupInfo::ConnectionPoolHasBeenSet() const
{
    return m_connectionPoolHasBeenSet;
}

vector<NetAddr> ProxyGroupInfo::GetNetAddrInfos() const
{
    return m_netAddrInfos;
}

void ProxyGroupInfo::SetNetAddrInfos(const vector<NetAddr>& _netAddrInfos)
{
    m_netAddrInfos = _netAddrInfos;
    m_netAddrInfosHasBeenSet = true;
}

bool ProxyGroupInfo::NetAddrInfosHasBeenSet() const
{
    return m_netAddrInfosHasBeenSet;
}

vector<ObjectTask> ProxyGroupInfo::GetTasks() const
{
    return m_tasks;
}

void ProxyGroupInfo::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool ProxyGroupInfo::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

