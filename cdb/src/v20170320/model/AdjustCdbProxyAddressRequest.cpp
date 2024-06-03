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

#include <tencentcloud/cdb/v20170320/model/AdjustCdbProxyAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AdjustCdbProxyAddressRequest::AdjustCdbProxyAddressRequest() :
    m_proxyGroupIdHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_isKickOutHasBeenSet(false),
    m_minCountHasBeenSet(false),
    m_maxDelayHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_proxyAddressIdHasBeenSet(false),
    m_transSplitHasBeenSet(false),
    m_connectionPoolHasBeenSet(false),
    m_proxyAllocationHasBeenSet(false),
    m_autoLoadBalanceHasBeenSet(false),
    m_accessModeHasBeenSet(false)
{
}

string AdjustCdbProxyAddressRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isKickOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKickOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isKickOut, allocator);
    }

    if (m_minCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minCount, allocator);
    }

    if (m_maxDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxDelay, allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_failOver, allocator);
    }

    if (m_autoAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAddRo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoAddRo, allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_proxyAddressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddressId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyAddressId.c_str(), allocator).Move(), allocator);
    }

    if (m_transSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSplit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transSplit, allocator);
    }

    if (m_connectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectionPool, allocator);
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

    if (m_autoLoadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoLoadBalance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoLoadBalance, allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AdjustCdbProxyAddressRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void AdjustCdbProxyAddressRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string AdjustCdbProxyAddressRequest::GetWeightMode() const
{
    return m_weightMode;
}

void AdjustCdbProxyAddressRequest::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

bool AdjustCdbProxyAddressRequest::GetIsKickOut() const
{
    return m_isKickOut;
}

void AdjustCdbProxyAddressRequest::SetIsKickOut(const bool& _isKickOut)
{
    m_isKickOut = _isKickOut;
    m_isKickOutHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::IsKickOutHasBeenSet() const
{
    return m_isKickOutHasBeenSet;
}

uint64_t AdjustCdbProxyAddressRequest::GetMinCount() const
{
    return m_minCount;
}

void AdjustCdbProxyAddressRequest::SetMinCount(const uint64_t& _minCount)
{
    m_minCount = _minCount;
    m_minCountHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::MinCountHasBeenSet() const
{
    return m_minCountHasBeenSet;
}

uint64_t AdjustCdbProxyAddressRequest::GetMaxDelay() const
{
    return m_maxDelay;
}

void AdjustCdbProxyAddressRequest::SetMaxDelay(const uint64_t& _maxDelay)
{
    m_maxDelay = _maxDelay;
    m_maxDelayHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::MaxDelayHasBeenSet() const
{
    return m_maxDelayHasBeenSet;
}

bool AdjustCdbProxyAddressRequest::GetFailOver() const
{
    return m_failOver;
}

void AdjustCdbProxyAddressRequest::SetFailOver(const bool& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

bool AdjustCdbProxyAddressRequest::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void AdjustCdbProxyAddressRequest::SetAutoAddRo(const bool& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

bool AdjustCdbProxyAddressRequest::GetReadOnly() const
{
    return m_readOnly;
}

void AdjustCdbProxyAddressRequest::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

string AdjustCdbProxyAddressRequest::GetProxyAddressId() const
{
    return m_proxyAddressId;
}

void AdjustCdbProxyAddressRequest::SetProxyAddressId(const string& _proxyAddressId)
{
    m_proxyAddressId = _proxyAddressId;
    m_proxyAddressIdHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::ProxyAddressIdHasBeenSet() const
{
    return m_proxyAddressIdHasBeenSet;
}

bool AdjustCdbProxyAddressRequest::GetTransSplit() const
{
    return m_transSplit;
}

void AdjustCdbProxyAddressRequest::SetTransSplit(const bool& _transSplit)
{
    m_transSplit = _transSplit;
    m_transSplitHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::TransSplitHasBeenSet() const
{
    return m_transSplitHasBeenSet;
}

bool AdjustCdbProxyAddressRequest::GetConnectionPool() const
{
    return m_connectionPool;
}

void AdjustCdbProxyAddressRequest::SetConnectionPool(const bool& _connectionPool)
{
    m_connectionPool = _connectionPool;
    m_connectionPoolHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::ConnectionPoolHasBeenSet() const
{
    return m_connectionPoolHasBeenSet;
}

vector<ProxyAllocation> AdjustCdbProxyAddressRequest::GetProxyAllocation() const
{
    return m_proxyAllocation;
}

void AdjustCdbProxyAddressRequest::SetProxyAllocation(const vector<ProxyAllocation>& _proxyAllocation)
{
    m_proxyAllocation = _proxyAllocation;
    m_proxyAllocationHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::ProxyAllocationHasBeenSet() const
{
    return m_proxyAllocationHasBeenSet;
}

bool AdjustCdbProxyAddressRequest::GetAutoLoadBalance() const
{
    return m_autoLoadBalance;
}

void AdjustCdbProxyAddressRequest::SetAutoLoadBalance(const bool& _autoLoadBalance)
{
    m_autoLoadBalance = _autoLoadBalance;
    m_autoLoadBalanceHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::AutoLoadBalanceHasBeenSet() const
{
    return m_autoLoadBalanceHasBeenSet;
}

string AdjustCdbProxyAddressRequest::GetAccessMode() const
{
    return m_accessMode;
}

void AdjustCdbProxyAddressRequest::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool AdjustCdbProxyAddressRequest::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}


