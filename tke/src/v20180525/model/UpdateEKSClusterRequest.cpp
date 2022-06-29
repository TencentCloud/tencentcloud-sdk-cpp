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

#include <tencentcloud/tke/v20180525/model/UpdateEKSClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpdateEKSClusterRequest::UpdateEKSClusterRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterDescHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_publicLBHasBeenSet(false),
    m_internalLBHasBeenSet(false),
    m_serviceSubnetIdHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_clearDnsServerHasBeenSet(false),
    m_needDeleteCbsHasBeenSet(false),
    m_proxyLBHasBeenSet(false),
    m_extraParamHasBeenSet(false)
{
}

string UpdateEKSClusterRequest::ToJsonString() const
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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicLB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicLB.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_internalLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalLB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internalLB.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsServers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dnsServers.begin(); itr != m_dnsServers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clearDnsServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearDnsServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clearDnsServer.c_str(), allocator).Move(), allocator);
    }

    if (m_needDeleteCbsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDeleteCbs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needDeleteCbs, allocator);
    }

    if (m_proxyLBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyLB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxyLB, allocator);
    }

    if (m_extraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateEKSClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateEKSClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateEKSClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpdateEKSClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void UpdateEKSClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool UpdateEKSClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string UpdateEKSClusterRequest::GetClusterDesc() const
{
    return m_clusterDesc;
}

void UpdateEKSClusterRequest::SetClusterDesc(const string& _clusterDesc)
{
    m_clusterDesc = _clusterDesc;
    m_clusterDescHasBeenSet = true;
}

bool UpdateEKSClusterRequest::ClusterDescHasBeenSet() const
{
    return m_clusterDescHasBeenSet;
}

vector<string> UpdateEKSClusterRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void UpdateEKSClusterRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool UpdateEKSClusterRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

ClusterPublicLB UpdateEKSClusterRequest::GetPublicLB() const
{
    return m_publicLB;
}

void UpdateEKSClusterRequest::SetPublicLB(const ClusterPublicLB& _publicLB)
{
    m_publicLB = _publicLB;
    m_publicLBHasBeenSet = true;
}

bool UpdateEKSClusterRequest::PublicLBHasBeenSet() const
{
    return m_publicLBHasBeenSet;
}

ClusterInternalLB UpdateEKSClusterRequest::GetInternalLB() const
{
    return m_internalLB;
}

void UpdateEKSClusterRequest::SetInternalLB(const ClusterInternalLB& _internalLB)
{
    m_internalLB = _internalLB;
    m_internalLBHasBeenSet = true;
}

bool UpdateEKSClusterRequest::InternalLBHasBeenSet() const
{
    return m_internalLBHasBeenSet;
}

string UpdateEKSClusterRequest::GetServiceSubnetId() const
{
    return m_serviceSubnetId;
}

void UpdateEKSClusterRequest::SetServiceSubnetId(const string& _serviceSubnetId)
{
    m_serviceSubnetId = _serviceSubnetId;
    m_serviceSubnetIdHasBeenSet = true;
}

bool UpdateEKSClusterRequest::ServiceSubnetIdHasBeenSet() const
{
    return m_serviceSubnetIdHasBeenSet;
}

vector<DnsServerConf> UpdateEKSClusterRequest::GetDnsServers() const
{
    return m_dnsServers;
}

void UpdateEKSClusterRequest::SetDnsServers(const vector<DnsServerConf>& _dnsServers)
{
    m_dnsServers = _dnsServers;
    m_dnsServersHasBeenSet = true;
}

bool UpdateEKSClusterRequest::DnsServersHasBeenSet() const
{
    return m_dnsServersHasBeenSet;
}

string UpdateEKSClusterRequest::GetClearDnsServer() const
{
    return m_clearDnsServer;
}

void UpdateEKSClusterRequest::SetClearDnsServer(const string& _clearDnsServer)
{
    m_clearDnsServer = _clearDnsServer;
    m_clearDnsServerHasBeenSet = true;
}

bool UpdateEKSClusterRequest::ClearDnsServerHasBeenSet() const
{
    return m_clearDnsServerHasBeenSet;
}

bool UpdateEKSClusterRequest::GetNeedDeleteCbs() const
{
    return m_needDeleteCbs;
}

void UpdateEKSClusterRequest::SetNeedDeleteCbs(const bool& _needDeleteCbs)
{
    m_needDeleteCbs = _needDeleteCbs;
    m_needDeleteCbsHasBeenSet = true;
}

bool UpdateEKSClusterRequest::NeedDeleteCbsHasBeenSet() const
{
    return m_needDeleteCbsHasBeenSet;
}

bool UpdateEKSClusterRequest::GetProxyLB() const
{
    return m_proxyLB;
}

void UpdateEKSClusterRequest::SetProxyLB(const bool& _proxyLB)
{
    m_proxyLB = _proxyLB;
    m_proxyLBHasBeenSet = true;
}

bool UpdateEKSClusterRequest::ProxyLBHasBeenSet() const
{
    return m_proxyLBHasBeenSet;
}

string UpdateEKSClusterRequest::GetExtraParam() const
{
    return m_extraParam;
}

void UpdateEKSClusterRequest::SetExtraParam(const string& _extraParam)
{
    m_extraParam = _extraParam;
    m_extraParamHasBeenSet = true;
}

bool UpdateEKSClusterRequest::ExtraParamHasBeenSet() const
{
    return m_extraParamHasBeenSet;
}


