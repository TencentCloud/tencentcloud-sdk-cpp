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

#include <tencentcloud/postgres/v20170312/model/ModifyDBProxyAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyDBProxyAddressRequest::ModifyDBProxyAddressRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_connectionPoolHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_proxyAllocationHasBeenSet(false),
    m_roAutoAddHasBeenSet(false),
    m_latencyRemoveHasBeenSet(false),
    m_latencyRemoveTimeHasBeenSet(false),
    m_minRouteNumHasBeenSet(false),
    m_loadBalancePolicyHasBeenSet(false)
{
}

string ModifyDBProxyAddressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_addressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectionPool, allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyAllocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAllocation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyAllocation.begin(); itr != m_proxyAllocation.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_roAutoAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoAutoAdd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roAutoAdd, allocator);
    }

    if (m_latencyRemoveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyRemove";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_latencyRemove, allocator);
    }

    if (m_latencyRemoveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyRemoveTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_latencyRemoveTime, allocator);
    }

    if (m_minRouteNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRouteNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minRouteNum, allocator);
    }

    if (m_loadBalancePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancePolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_loadBalancePolicy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBProxyAddressRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ModifyDBProxyAddressRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string ModifyDBProxyAddressRequest::GetAddressId() const
{
    return m_addressId;
}

void ModifyDBProxyAddressRequest::SetAddressId(const string& _addressId)
{
    m_addressId = _addressId;
    m_addressIdHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::AddressIdHasBeenSet() const
{
    return m_addressIdHasBeenSet;
}

string ModifyDBProxyAddressRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void ModifyDBProxyAddressRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string ModifyDBProxyAddressRequest::GetDescription() const
{
    return m_description;
}

void ModifyDBProxyAddressRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool ModifyDBProxyAddressRequest::GetConnectionPool() const
{
    return m_connectionPool;
}

void ModifyDBProxyAddressRequest::SetConnectionPool(const bool& _connectionPool)
{
    m_connectionPool = _connectionPool;
    m_connectionPoolHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::ConnectionPoolHasBeenSet() const
{
    return m_connectionPoolHasBeenSet;
}

string ModifyDBProxyAddressRequest::GetWeightMode() const
{
    return m_weightMode;
}

void ModifyDBProxyAddressRequest::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

vector<ProxyRoute> ModifyDBProxyAddressRequest::GetProxyAllocation() const
{
    return m_proxyAllocation;
}

void ModifyDBProxyAddressRequest::SetProxyAllocation(const vector<ProxyRoute>& _proxyAllocation)
{
    m_proxyAllocation = _proxyAllocation;
    m_proxyAllocationHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::ProxyAllocationHasBeenSet() const
{
    return m_proxyAllocationHasBeenSet;
}

bool ModifyDBProxyAddressRequest::GetRoAutoAdd() const
{
    return m_roAutoAdd;
}

void ModifyDBProxyAddressRequest::SetRoAutoAdd(const bool& _roAutoAdd)
{
    m_roAutoAdd = _roAutoAdd;
    m_roAutoAddHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::RoAutoAddHasBeenSet() const
{
    return m_roAutoAddHasBeenSet;
}

bool ModifyDBProxyAddressRequest::GetLatencyRemove() const
{
    return m_latencyRemove;
}

void ModifyDBProxyAddressRequest::SetLatencyRemove(const bool& _latencyRemove)
{
    m_latencyRemove = _latencyRemove;
    m_latencyRemoveHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::LatencyRemoveHasBeenSet() const
{
    return m_latencyRemoveHasBeenSet;
}

uint64_t ModifyDBProxyAddressRequest::GetLatencyRemoveTime() const
{
    return m_latencyRemoveTime;
}

void ModifyDBProxyAddressRequest::SetLatencyRemoveTime(const uint64_t& _latencyRemoveTime)
{
    m_latencyRemoveTime = _latencyRemoveTime;
    m_latencyRemoveTimeHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::LatencyRemoveTimeHasBeenSet() const
{
    return m_latencyRemoveTimeHasBeenSet;
}

uint64_t ModifyDBProxyAddressRequest::GetMinRouteNum() const
{
    return m_minRouteNum;
}

void ModifyDBProxyAddressRequest::SetMinRouteNum(const uint64_t& _minRouteNum)
{
    m_minRouteNum = _minRouteNum;
    m_minRouteNumHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::MinRouteNumHasBeenSet() const
{
    return m_minRouteNumHasBeenSet;
}

int64_t ModifyDBProxyAddressRequest::GetLoadBalancePolicy() const
{
    return m_loadBalancePolicy;
}

void ModifyDBProxyAddressRequest::SetLoadBalancePolicy(const int64_t& _loadBalancePolicy)
{
    m_loadBalancePolicy = _loadBalancePolicy;
    m_loadBalancePolicyHasBeenSet = true;
}

bool ModifyDBProxyAddressRequest::LoadBalancePolicyHasBeenSet() const
{
    return m_loadBalancePolicyHasBeenSet;
}


