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

#include <tencentcloud/cynosdb/v20190107/model/CreateProxyEndPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CreateProxyEndPointRequest::CreateProxyEndPointRequest() :
    m_clusterIdHasBeenSet(false),
    m_uniqueVpcIdHasBeenSet(false),
    m_uniqueSubnetIdHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false),
    m_openConnectionPoolHasBeenSet(false),
    m_connectionPoolTimeOutHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_consistencyTypeHasBeenSet(false),
    m_rwTypeHasBeenSet(false),
    m_consistencyTimeOutHasBeenSet(false),
    m_transSplitHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_instanceWeightsHasBeenSet(false)
{
}

string CreateProxyEndPointRequest::ToJsonString() const
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

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_autoAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAddRo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoAddRo.c_str(), allocator).Move(), allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_failOver.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsistencyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consistencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_rwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RwType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rwType.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsistencyTimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_consistencyTimeOut, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProxyEndPointRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateProxyEndPointRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateProxyEndPointRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateProxyEndPointRequest::GetUniqueVpcId() const
{
    return m_uniqueVpcId;
}

void CreateProxyEndPointRequest::SetUniqueVpcId(const string& _uniqueVpcId)
{
    m_uniqueVpcId = _uniqueVpcId;
    m_uniqueVpcIdHasBeenSet = true;
}

bool CreateProxyEndPointRequest::UniqueVpcIdHasBeenSet() const
{
    return m_uniqueVpcIdHasBeenSet;
}

string CreateProxyEndPointRequest::GetUniqueSubnetId() const
{
    return m_uniqueSubnetId;
}

void CreateProxyEndPointRequest::SetUniqueSubnetId(const string& _uniqueSubnetId)
{
    m_uniqueSubnetId = _uniqueSubnetId;
    m_uniqueSubnetIdHasBeenSet = true;
}

bool CreateProxyEndPointRequest::UniqueSubnetIdHasBeenSet() const
{
    return m_uniqueSubnetIdHasBeenSet;
}

string CreateProxyEndPointRequest::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void CreateProxyEndPointRequest::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool CreateProxyEndPointRequest::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

string CreateProxyEndPointRequest::GetOpenConnectionPool() const
{
    return m_openConnectionPool;
}

void CreateProxyEndPointRequest::SetOpenConnectionPool(const string& _openConnectionPool)
{
    m_openConnectionPool = _openConnectionPool;
    m_openConnectionPoolHasBeenSet = true;
}

bool CreateProxyEndPointRequest::OpenConnectionPoolHasBeenSet() const
{
    return m_openConnectionPoolHasBeenSet;
}

int64_t CreateProxyEndPointRequest::GetConnectionPoolTimeOut() const
{
    return m_connectionPoolTimeOut;
}

void CreateProxyEndPointRequest::SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut)
{
    m_connectionPoolTimeOut = _connectionPoolTimeOut;
    m_connectionPoolTimeOutHasBeenSet = true;
}

bool CreateProxyEndPointRequest::ConnectionPoolTimeOutHasBeenSet() const
{
    return m_connectionPoolTimeOutHasBeenSet;
}

vector<string> CreateProxyEndPointRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateProxyEndPointRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateProxyEndPointRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string CreateProxyEndPointRequest::GetDescription() const
{
    return m_description;
}

void CreateProxyEndPointRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateProxyEndPointRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateProxyEndPointRequest::GetVip() const
{
    return m_vip;
}

void CreateProxyEndPointRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CreateProxyEndPointRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string CreateProxyEndPointRequest::GetWeightMode() const
{
    return m_weightMode;
}

void CreateProxyEndPointRequest::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool CreateProxyEndPointRequest::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

string CreateProxyEndPointRequest::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void CreateProxyEndPointRequest::SetAutoAddRo(const string& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool CreateProxyEndPointRequest::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

string CreateProxyEndPointRequest::GetFailOver() const
{
    return m_failOver;
}

void CreateProxyEndPointRequest::SetFailOver(const string& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool CreateProxyEndPointRequest::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

string CreateProxyEndPointRequest::GetConsistencyType() const
{
    return m_consistencyType;
}

void CreateProxyEndPointRequest::SetConsistencyType(const string& _consistencyType)
{
    m_consistencyType = _consistencyType;
    m_consistencyTypeHasBeenSet = true;
}

bool CreateProxyEndPointRequest::ConsistencyTypeHasBeenSet() const
{
    return m_consistencyTypeHasBeenSet;
}

string CreateProxyEndPointRequest::GetRwType() const
{
    return m_rwType;
}

void CreateProxyEndPointRequest::SetRwType(const string& _rwType)
{
    m_rwType = _rwType;
    m_rwTypeHasBeenSet = true;
}

bool CreateProxyEndPointRequest::RwTypeHasBeenSet() const
{
    return m_rwTypeHasBeenSet;
}

int64_t CreateProxyEndPointRequest::GetConsistencyTimeOut() const
{
    return m_consistencyTimeOut;
}

void CreateProxyEndPointRequest::SetConsistencyTimeOut(const int64_t& _consistencyTimeOut)
{
    m_consistencyTimeOut = _consistencyTimeOut;
    m_consistencyTimeOutHasBeenSet = true;
}

bool CreateProxyEndPointRequest::ConsistencyTimeOutHasBeenSet() const
{
    return m_consistencyTimeOutHasBeenSet;
}

bool CreateProxyEndPointRequest::GetTransSplit() const
{
    return m_transSplit;
}

void CreateProxyEndPointRequest::SetTransSplit(const bool& _transSplit)
{
    m_transSplit = _transSplit;
    m_transSplitHasBeenSet = true;
}

bool CreateProxyEndPointRequest::TransSplitHasBeenSet() const
{
    return m_transSplitHasBeenSet;
}

string CreateProxyEndPointRequest::GetAccessMode() const
{
    return m_accessMode;
}

void CreateProxyEndPointRequest::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool CreateProxyEndPointRequest::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

vector<ProxyInstanceWeight> CreateProxyEndPointRequest::GetInstanceWeights() const
{
    return m_instanceWeights;
}

void CreateProxyEndPointRequest::SetInstanceWeights(const vector<ProxyInstanceWeight>& _instanceWeights)
{
    m_instanceWeights = _instanceWeights;
    m_instanceWeightsHasBeenSet = true;
}

bool CreateProxyEndPointRequest::InstanceWeightsHasBeenSet() const
{
    return m_instanceWeightsHasBeenSet;
}


