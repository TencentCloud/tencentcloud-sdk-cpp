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

#include <tencentcloud/cynosdb/v20190107/model/CreateProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateProxyRequest::CreateProxyRequest() :
    m_clusterIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_uniqueVpcIdHasBeenSet(false),
    m_uniqueSubnetIdHasBeenSet(false),
    m_proxyCountHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false),
    m_openConnectionPoolHasBeenSet(false),
    m_connectionPoolTimeOutHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_proxyZonesHasBeenSet(false)
{
}

string CreateProxyRequest::ToJsonString() const
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

    if (m_uniqueVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqueVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqueSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxyCount, allocator);
    }

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
    }

    if (m_openConnectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openConnectionPool.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolTimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectionPoolTimeOut, allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyZones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyZones.begin(); itr != m_proxyZones.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProxyRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateProxyRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateProxyRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CreateProxyRequest::GetCpu() const
{
    return m_cpu;
}

void CreateProxyRequest::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CreateProxyRequest::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CreateProxyRequest::GetMem() const
{
    return m_mem;
}

void CreateProxyRequest::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool CreateProxyRequest::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string CreateProxyRequest::GetUniqueVpcId() const
{
    return m_uniqueVpcId;
}

void CreateProxyRequest::SetUniqueVpcId(const string& _uniqueVpcId)
{
    m_uniqueVpcId = _uniqueVpcId;
    m_uniqueVpcIdHasBeenSet = true;
}

bool CreateProxyRequest::UniqueVpcIdHasBeenSet() const
{
    return m_uniqueVpcIdHasBeenSet;
}

string CreateProxyRequest::GetUniqueSubnetId() const
{
    return m_uniqueSubnetId;
}

void CreateProxyRequest::SetUniqueSubnetId(const string& _uniqueSubnetId)
{
    m_uniqueSubnetId = _uniqueSubnetId;
    m_uniqueSubnetIdHasBeenSet = true;
}

bool CreateProxyRequest::UniqueSubnetIdHasBeenSet() const
{
    return m_uniqueSubnetIdHasBeenSet;
}

int64_t CreateProxyRequest::GetProxyCount() const
{
    return m_proxyCount;
}

void CreateProxyRequest::SetProxyCount(const int64_t& _proxyCount)
{
    m_proxyCount = _proxyCount;
    m_proxyCountHasBeenSet = true;
}

bool CreateProxyRequest::ProxyCountHasBeenSet() const
{
    return m_proxyCountHasBeenSet;
}

string CreateProxyRequest::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void CreateProxyRequest::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool CreateProxyRequest::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

string CreateProxyRequest::GetOpenConnectionPool() const
{
    return m_openConnectionPool;
}

void CreateProxyRequest::SetOpenConnectionPool(const string& _openConnectionPool)
{
    m_openConnectionPool = _openConnectionPool;
    m_openConnectionPoolHasBeenSet = true;
}

bool CreateProxyRequest::OpenConnectionPoolHasBeenSet() const
{
    return m_openConnectionPoolHasBeenSet;
}

int64_t CreateProxyRequest::GetConnectionPoolTimeOut() const
{
    return m_connectionPoolTimeOut;
}

void CreateProxyRequest::SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut)
{
    m_connectionPoolTimeOut = _connectionPoolTimeOut;
    m_connectionPoolTimeOutHasBeenSet = true;
}

bool CreateProxyRequest::ConnectionPoolTimeOutHasBeenSet() const
{
    return m_connectionPoolTimeOutHasBeenSet;
}

vector<string> CreateProxyRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateProxyRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateProxyRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string CreateProxyRequest::GetDescription() const
{
    return m_description;
}

void CreateProxyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateProxyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<ProxyZone> CreateProxyRequest::GetProxyZones() const
{
    return m_proxyZones;
}

void CreateProxyRequest::SetProxyZones(const vector<ProxyZone>& _proxyZones)
{
    m_proxyZones = _proxyZones;
    m_proxyZonesHasBeenSet = true;
}

bool CreateProxyRequest::ProxyZonesHasBeenSet() const
{
    return m_proxyZonesHasBeenSet;
}


