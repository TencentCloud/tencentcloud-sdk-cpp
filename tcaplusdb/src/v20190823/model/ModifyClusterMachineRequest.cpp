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

#include <tencentcloud/tcaplusdb/v20190823/model/ModifyClusterMachineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

ModifyClusterMachineRequest::ModifyClusterMachineRequest() :
    m_clusterIdHasBeenSet(false),
    m_serverListHasBeenSet(false),
    m_proxyListHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

string ModifyClusterMachineRequest::ToJsonString() const
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

    if (m_serverListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serverList.begin(); itr != m_serverList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_proxyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyList.begin(); itr != m_proxyList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterMachineRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterMachineRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterMachineRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<MachineInfo> ModifyClusterMachineRequest::GetServerList() const
{
    return m_serverList;
}

void ModifyClusterMachineRequest::SetServerList(const vector<MachineInfo>& _serverList)
{
    m_serverList = _serverList;
    m_serverListHasBeenSet = true;
}

bool ModifyClusterMachineRequest::ServerListHasBeenSet() const
{
    return m_serverListHasBeenSet;
}

vector<MachineInfo> ModifyClusterMachineRequest::GetProxyList() const
{
    return m_proxyList;
}

void ModifyClusterMachineRequest::SetProxyList(const vector<MachineInfo>& _proxyList)
{
    m_proxyList = _proxyList;
    m_proxyListHasBeenSet = true;
}

bool ModifyClusterMachineRequest::ProxyListHasBeenSet() const
{
    return m_proxyListHasBeenSet;
}

int64_t ModifyClusterMachineRequest::GetClusterType() const
{
    return m_clusterType;
}

void ModifyClusterMachineRequest::SetClusterType(const int64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ModifyClusterMachineRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}


