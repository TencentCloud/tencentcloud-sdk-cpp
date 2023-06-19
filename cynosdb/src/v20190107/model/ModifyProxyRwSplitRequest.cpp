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

#include <tencentcloud/cynosdb/v20190107/model/ModifyProxyRwSplitRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyProxyRwSplitRequest::ModifyProxyRwSplitRequest() :
    m_clusterIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_consistencyTypeHasBeenSet(false),
    m_consistencyTimeOutHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_instanceWeightsHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_openRwHasBeenSet(false),
    m_rwTypeHasBeenSet(false),
    m_transSplitHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_openConnectionPoolHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false),
    m_connectionPoolTimeOutHasBeenSet(false)
{
}

string ModifyProxyRwSplitRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsistencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consistencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsistencyTimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consistencyTimeOut.c_str(), allocator).Move(), allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceWeightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceWeights";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceWeights.begin(); itr != m_instanceWeights.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_failOver.c_str(), allocator).Move(), allocator);
    }

    if (m_autoAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAddRo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoAddRo.c_str(), allocator).Move(), allocator);
    }

    if (m_openRwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenRw";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openRw.c_str(), allocator).Move(), allocator);
    }

    if (m_rwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RwType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rwType.c_str(), allocator).Move(), allocator);
    }

    if (m_transSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSplit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transSplit, allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_openConnectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openConnectionPool.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolTimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectionPoolTimeOut, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProxyRwSplitRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyProxyRwSplitRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ModifyProxyRwSplitRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetConsistencyType() const
{
    return m_consistencyType;
}

void ModifyProxyRwSplitRequest::SetConsistencyType(const string& _consistencyType)
{
    m_consistencyType = _consistencyType;
    m_consistencyTypeHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::ConsistencyTypeHasBeenSet() const
{
    return m_consistencyTypeHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetConsistencyTimeOut() const
{
    return m_consistencyTimeOut;
}

void ModifyProxyRwSplitRequest::SetConsistencyTimeOut(const string& _consistencyTimeOut)
{
    m_consistencyTimeOut = _consistencyTimeOut;
    m_consistencyTimeOutHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::ConsistencyTimeOutHasBeenSet() const
{
    return m_consistencyTimeOutHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetWeightMode() const
{
    return m_weightMode;
}

void ModifyProxyRwSplitRequest::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

vector<ProxyInstanceWeight> ModifyProxyRwSplitRequest::GetInstanceWeights() const
{
    return m_instanceWeights;
}

void ModifyProxyRwSplitRequest::SetInstanceWeights(const vector<ProxyInstanceWeight>& _instanceWeights)
{
    m_instanceWeights = _instanceWeights;
    m_instanceWeightsHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::InstanceWeightsHasBeenSet() const
{
    return m_instanceWeightsHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetFailOver() const
{
    return m_failOver;
}

void ModifyProxyRwSplitRequest::SetFailOver(const string& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void ModifyProxyRwSplitRequest::SetAutoAddRo(const string& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetOpenRw() const
{
    return m_openRw;
}

void ModifyProxyRwSplitRequest::SetOpenRw(const string& _openRw)
{
    m_openRw = _openRw;
    m_openRwHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::OpenRwHasBeenSet() const
{
    return m_openRwHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetRwType() const
{
    return m_rwType;
}

void ModifyProxyRwSplitRequest::SetRwType(const string& _rwType)
{
    m_rwType = _rwType;
    m_rwTypeHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::RwTypeHasBeenSet() const
{
    return m_rwTypeHasBeenSet;
}

bool ModifyProxyRwSplitRequest::GetTransSplit() const
{
    return m_transSplit;
}

void ModifyProxyRwSplitRequest::SetTransSplit(const bool& _transSplit)
{
    m_transSplit = _transSplit;
    m_transSplitHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::TransSplitHasBeenSet() const
{
    return m_transSplitHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetAccessMode() const
{
    return m_accessMode;
}

void ModifyProxyRwSplitRequest::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetOpenConnectionPool() const
{
    return m_openConnectionPool;
}

void ModifyProxyRwSplitRequest::SetOpenConnectionPool(const string& _openConnectionPool)
{
    m_openConnectionPool = _openConnectionPool;
    m_openConnectionPoolHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::OpenConnectionPoolHasBeenSet() const
{
    return m_openConnectionPoolHasBeenSet;
}

string ModifyProxyRwSplitRequest::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void ModifyProxyRwSplitRequest::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

int64_t ModifyProxyRwSplitRequest::GetConnectionPoolTimeOut() const
{
    return m_connectionPoolTimeOut;
}

void ModifyProxyRwSplitRequest::SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut)
{
    m_connectionPoolTimeOut = _connectionPoolTimeOut;
    m_connectionPoolTimeOutHasBeenSet = true;
}

bool ModifyProxyRwSplitRequest::ConnectionPoolTimeOutHasBeenSet() const
{
    return m_connectionPoolTimeOutHasBeenSet;
}


