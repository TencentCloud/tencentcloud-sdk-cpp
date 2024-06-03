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

#include <tencentcloud/cdb/v20170320/model/CreateCdbProxyAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateCdbProxyAddressRequest::CreateCdbProxyAddressRequest() :
    m_proxyGroupIdHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_isKickOutHasBeenSet(false),
    m_minCountHasBeenSet(false),
    m_maxDelayHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_transSplitHasBeenSet(false),
    m_proxyAllocationHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_connectionPoolHasBeenSet(false),
    m_descHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false),
    m_autoLoadBalanceHasBeenSet(false),
    m_accessModeHasBeenSet(false)
{
}

string CreateCdbProxyAddressRequest::ToJsonString() const
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

    if (m_transSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSplit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transSplit, allocator);
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

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectionPool, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vPort, allocator);
    }

    if (m_securityGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroup.begin(); itr != m_securityGroup.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
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


string CreateCdbProxyAddressRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void CreateCdbProxyAddressRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

string CreateCdbProxyAddressRequest::GetWeightMode() const
{
    return m_weightMode;
}

void CreateCdbProxyAddressRequest::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

bool CreateCdbProxyAddressRequest::GetIsKickOut() const
{
    return m_isKickOut;
}

void CreateCdbProxyAddressRequest::SetIsKickOut(const bool& _isKickOut)
{
    m_isKickOut = _isKickOut;
    m_isKickOutHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::IsKickOutHasBeenSet() const
{
    return m_isKickOutHasBeenSet;
}

uint64_t CreateCdbProxyAddressRequest::GetMinCount() const
{
    return m_minCount;
}

void CreateCdbProxyAddressRequest::SetMinCount(const uint64_t& _minCount)
{
    m_minCount = _minCount;
    m_minCountHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::MinCountHasBeenSet() const
{
    return m_minCountHasBeenSet;
}

uint64_t CreateCdbProxyAddressRequest::GetMaxDelay() const
{
    return m_maxDelay;
}

void CreateCdbProxyAddressRequest::SetMaxDelay(const uint64_t& _maxDelay)
{
    m_maxDelay = _maxDelay;
    m_maxDelayHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::MaxDelayHasBeenSet() const
{
    return m_maxDelayHasBeenSet;
}

bool CreateCdbProxyAddressRequest::GetFailOver() const
{
    return m_failOver;
}

void CreateCdbProxyAddressRequest::SetFailOver(const bool& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

bool CreateCdbProxyAddressRequest::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void CreateCdbProxyAddressRequest::SetAutoAddRo(const bool& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

bool CreateCdbProxyAddressRequest::GetReadOnly() const
{
    return m_readOnly;
}

void CreateCdbProxyAddressRequest::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

bool CreateCdbProxyAddressRequest::GetTransSplit() const
{
    return m_transSplit;
}

void CreateCdbProxyAddressRequest::SetTransSplit(const bool& _transSplit)
{
    m_transSplit = _transSplit;
    m_transSplitHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::TransSplitHasBeenSet() const
{
    return m_transSplitHasBeenSet;
}

vector<ProxyAllocation> CreateCdbProxyAddressRequest::GetProxyAllocation() const
{
    return m_proxyAllocation;
}

void CreateCdbProxyAddressRequest::SetProxyAllocation(const vector<ProxyAllocation>& _proxyAllocation)
{
    m_proxyAllocation = _proxyAllocation;
    m_proxyAllocationHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::ProxyAllocationHasBeenSet() const
{
    return m_proxyAllocationHasBeenSet;
}

string CreateCdbProxyAddressRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void CreateCdbProxyAddressRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string CreateCdbProxyAddressRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void CreateCdbProxyAddressRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

bool CreateCdbProxyAddressRequest::GetConnectionPool() const
{
    return m_connectionPool;
}

void CreateCdbProxyAddressRequest::SetConnectionPool(const bool& _connectionPool)
{
    m_connectionPool = _connectionPool;
    m_connectionPoolHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::ConnectionPoolHasBeenSet() const
{
    return m_connectionPoolHasBeenSet;
}

string CreateCdbProxyAddressRequest::GetDesc() const
{
    return m_desc;
}

void CreateCdbProxyAddressRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string CreateCdbProxyAddressRequest::GetVip() const
{
    return m_vip;
}

void CreateCdbProxyAddressRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t CreateCdbProxyAddressRequest::GetVPort() const
{
    return m_vPort;
}

void CreateCdbProxyAddressRequest::SetVPort(const uint64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

vector<string> CreateCdbProxyAddressRequest::GetSecurityGroup() const
{
    return m_securityGroup;
}

void CreateCdbProxyAddressRequest::SetSecurityGroup(const vector<string>& _securityGroup)
{
    m_securityGroup = _securityGroup;
    m_securityGroupHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::SecurityGroupHasBeenSet() const
{
    return m_securityGroupHasBeenSet;
}

string CreateCdbProxyAddressRequest::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void CreateCdbProxyAddressRequest::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

bool CreateCdbProxyAddressRequest::GetAutoLoadBalance() const
{
    return m_autoLoadBalance;
}

void CreateCdbProxyAddressRequest::SetAutoLoadBalance(const bool& _autoLoadBalance)
{
    m_autoLoadBalance = _autoLoadBalance;
    m_autoLoadBalanceHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::AutoLoadBalanceHasBeenSet() const
{
    return m_autoLoadBalanceHasBeenSet;
}

string CreateCdbProxyAddressRequest::GetAccessMode() const
{
    return m_accessMode;
}

void CreateCdbProxyAddressRequest::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool CreateCdbProxyAddressRequest::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}


