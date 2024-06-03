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

#include <tencentcloud/cdb/v20170320/model/ProxyAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ProxyAddress::ProxyAddress() :
    m_proxyAddressIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_isKickOutHasBeenSet(false),
    m_minCountHasBeenSet(false),
    m_maxDelayHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_transSplitHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_connectionPoolHasBeenSet(false),
    m_descHasBeenSet(false),
    m_proxyAllocationHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_autoLoadBalanceHasBeenSet(false)
{
}

CoreInternalOutcome ProxyAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyAddressId") && !value["ProxyAddressId"].IsNull())
    {
        if (!value["ProxyAddressId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.ProxyAddressId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyAddressId = string(value["ProxyAddressId"].GetString());
        m_proxyAddressIdHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VPort") && !value["VPort"].IsNull())
    {
        if (!value["VPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.VPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vPort = value["VPort"].GetUint64();
        m_vPortHasBeenSet = true;
    }

    if (value.HasMember("WeightMode") && !value["WeightMode"].IsNull())
    {
        if (!value["WeightMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.WeightMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightMode = string(value["WeightMode"].GetString());
        m_weightModeHasBeenSet = true;
    }

    if (value.HasMember("IsKickOut") && !value["IsKickOut"].IsNull())
    {
        if (!value["IsKickOut"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.IsKickOut` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isKickOut = value["IsKickOut"].GetBool();
        m_isKickOutHasBeenSet = true;
    }

    if (value.HasMember("MinCount") && !value["MinCount"].IsNull())
    {
        if (!value["MinCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.MinCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minCount = value["MinCount"].GetUint64();
        m_minCountHasBeenSet = true;
    }

    if (value.HasMember("MaxDelay") && !value["MaxDelay"].IsNull())
    {
        if (!value["MaxDelay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.MaxDelay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelay = value["MaxDelay"].GetUint64();
        m_maxDelayHasBeenSet = true;
    }

    if (value.HasMember("AutoAddRo") && !value["AutoAddRo"].IsNull())
    {
        if (!value["AutoAddRo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.AutoAddRo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoAddRo = value["AutoAddRo"].GetBool();
        m_autoAddRoHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("TransSplit") && !value["TransSplit"].IsNull())
    {
        if (!value["TransSplit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.TransSplit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_transSplit = value["TransSplit"].GetBool();
        m_transSplitHasBeenSet = true;
    }

    if (value.HasMember("FailOver") && !value["FailOver"].IsNull())
    {
        if (!value["FailOver"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.FailOver` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_failOver = value["FailOver"].GetBool();
        m_failOverHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPool") && !value["ConnectionPool"].IsNull())
    {
        if (!value["ConnectionPool"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.ConnectionPool` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPool = value["ConnectionPool"].GetBool();
        m_connectionPoolHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("ProxyAllocation") && !value["ProxyAllocation"].IsNull())
    {
        if (!value["ProxyAllocation"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.ProxyAllocation` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyAllocation"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyAllocation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyAllocation.push_back(item);
        }
        m_proxyAllocationHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("AutoLoadBalance") && !value["AutoLoadBalance"].IsNull())
    {
        if (!value["AutoLoadBalance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAddress.AutoLoadBalance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoLoadBalance = value["AutoLoadBalance"].GetBool();
        m_autoLoadBalanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyAddressIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAddressId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyAddressId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vPort, allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isKickOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKickOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKickOut, allocator);
    }

    if (m_minCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCount, allocator);
    }

    if (m_maxDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDelay, allocator);
    }

    if (m_autoAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAddRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoAddRo, allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_transSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSplit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transSplit, allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failOver, allocator);
    }

    if (m_connectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionPool, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyAllocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAllocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyAllocation.begin(); itr != m_proxyAllocation.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_autoLoadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoLoadBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoLoadBalance, allocator);
    }

}


string ProxyAddress::GetProxyAddressId() const
{
    return m_proxyAddressId;
}

void ProxyAddress::SetProxyAddressId(const string& _proxyAddressId)
{
    m_proxyAddressId = _proxyAddressId;
    m_proxyAddressIdHasBeenSet = true;
}

bool ProxyAddress::ProxyAddressIdHasBeenSet() const
{
    return m_proxyAddressIdHasBeenSet;
}

string ProxyAddress::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ProxyAddress::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ProxyAddress::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ProxyAddress::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void ProxyAddress::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool ProxyAddress::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string ProxyAddress::GetVip() const
{
    return m_vip;
}

void ProxyAddress::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ProxyAddress::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t ProxyAddress::GetVPort() const
{
    return m_vPort;
}

void ProxyAddress::SetVPort(const uint64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool ProxyAddress::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

string ProxyAddress::GetWeightMode() const
{
    return m_weightMode;
}

void ProxyAddress::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool ProxyAddress::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

bool ProxyAddress::GetIsKickOut() const
{
    return m_isKickOut;
}

void ProxyAddress::SetIsKickOut(const bool& _isKickOut)
{
    m_isKickOut = _isKickOut;
    m_isKickOutHasBeenSet = true;
}

bool ProxyAddress::IsKickOutHasBeenSet() const
{
    return m_isKickOutHasBeenSet;
}

uint64_t ProxyAddress::GetMinCount() const
{
    return m_minCount;
}

void ProxyAddress::SetMinCount(const uint64_t& _minCount)
{
    m_minCount = _minCount;
    m_minCountHasBeenSet = true;
}

bool ProxyAddress::MinCountHasBeenSet() const
{
    return m_minCountHasBeenSet;
}

uint64_t ProxyAddress::GetMaxDelay() const
{
    return m_maxDelay;
}

void ProxyAddress::SetMaxDelay(const uint64_t& _maxDelay)
{
    m_maxDelay = _maxDelay;
    m_maxDelayHasBeenSet = true;
}

bool ProxyAddress::MaxDelayHasBeenSet() const
{
    return m_maxDelayHasBeenSet;
}

bool ProxyAddress::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void ProxyAddress::SetAutoAddRo(const bool& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool ProxyAddress::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

bool ProxyAddress::GetReadOnly() const
{
    return m_readOnly;
}

void ProxyAddress::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool ProxyAddress::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

bool ProxyAddress::GetTransSplit() const
{
    return m_transSplit;
}

void ProxyAddress::SetTransSplit(const bool& _transSplit)
{
    m_transSplit = _transSplit;
    m_transSplitHasBeenSet = true;
}

bool ProxyAddress::TransSplitHasBeenSet() const
{
    return m_transSplitHasBeenSet;
}

bool ProxyAddress::GetFailOver() const
{
    return m_failOver;
}

void ProxyAddress::SetFailOver(const bool& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool ProxyAddress::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

bool ProxyAddress::GetConnectionPool() const
{
    return m_connectionPool;
}

void ProxyAddress::SetConnectionPool(const bool& _connectionPool)
{
    m_connectionPool = _connectionPool;
    m_connectionPoolHasBeenSet = true;
}

bool ProxyAddress::ConnectionPoolHasBeenSet() const
{
    return m_connectionPoolHasBeenSet;
}

string ProxyAddress::GetDesc() const
{
    return m_desc;
}

void ProxyAddress::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ProxyAddress::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

vector<ProxyAllocation> ProxyAddress::GetProxyAllocation() const
{
    return m_proxyAllocation;
}

void ProxyAddress::SetProxyAllocation(const vector<ProxyAllocation>& _proxyAllocation)
{
    m_proxyAllocation = _proxyAllocation;
    m_proxyAllocationHasBeenSet = true;
}

bool ProxyAddress::ProxyAllocationHasBeenSet() const
{
    return m_proxyAllocationHasBeenSet;
}

string ProxyAddress::GetAccessMode() const
{
    return m_accessMode;
}

void ProxyAddress::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool ProxyAddress::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

bool ProxyAddress::GetAutoLoadBalance() const
{
    return m_autoLoadBalance;
}

void ProxyAddress::SetAutoLoadBalance(const bool& _autoLoadBalance)
{
    m_autoLoadBalance = _autoLoadBalance;
    m_autoLoadBalanceHasBeenSet = true;
}

bool ProxyAddress::AutoLoadBalanceHasBeenSet() const
{
    return m_autoLoadBalanceHasBeenSet;
}

