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

#include <tencentcloud/cynosdb/v20190107/model/ProxyEndPointItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyEndPointItem::ProxyEndPointItem() :
    m_uniqueVpcIdHasBeenSet(false),
    m_uniqueSubnetIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_rwTypeHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_consistencyTimeOutHasBeenSet(false),
    m_consistencyTypeHasBeenSet(false),
    m_transSplitHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_instanceWeightsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_loadBalanceModeHasBeenSet(false),
    m_openConnectionPoolHasBeenSet(false),
    m_connectionPoolTypeHasBeenSet(false),
    m_connectionPoolTimeOutHasBeenSet(false)
{
}

CoreInternalOutcome ProxyEndPointItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UniqueVpcId") && !value["UniqueVpcId"].IsNull())
    {
        if (!value["UniqueVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.UniqueVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueVpcId = string(value["UniqueVpcId"].GetString());
        m_uniqueVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqueSubnetId") && !value["UniqueSubnetId"].IsNull())
    {
        if (!value["UniqueSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.UniqueSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueSubnetId = string(value["UniqueSubnetId"].GetString());
        m_uniqueSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }

    if (value.HasMember("WeightMode") && !value["WeightMode"].IsNull())
    {
        if (!value["WeightMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.WeightMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightMode = string(value["WeightMode"].GetString());
        m_weightModeHasBeenSet = true;
    }

    if (value.HasMember("AutoAddRo") && !value["AutoAddRo"].IsNull())
    {
        if (!value["AutoAddRo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.AutoAddRo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoAddRo = string(value["AutoAddRo"].GetString());
        m_autoAddRoHasBeenSet = true;
    }

    if (value.HasMember("RwType") && !value["RwType"].IsNull())
    {
        if (!value["RwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.RwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rwType = string(value["RwType"].GetString());
        m_rwTypeHasBeenSet = true;
    }

    if (value.HasMember("FailOver") && !value["FailOver"].IsNull())
    {
        if (!value["FailOver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.FailOver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failOver = string(value["FailOver"].GetString());
        m_failOverHasBeenSet = true;
    }

    if (value.HasMember("ConsistencyTimeOut") && !value["ConsistencyTimeOut"].IsNull())
    {
        if (!value["ConsistencyTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.ConsistencyTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consistencyTimeOut = value["ConsistencyTimeOut"].GetInt64();
        m_consistencyTimeOutHasBeenSet = true;
    }

    if (value.HasMember("ConsistencyType") && !value["ConsistencyType"].IsNull())
    {
        if (!value["ConsistencyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.ConsistencyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consistencyType = string(value["ConsistencyType"].GetString());
        m_consistencyTypeHasBeenSet = true;
    }

    if (value.HasMember("TransSplit") && !value["TransSplit"].IsNull())
    {
        if (!value["TransSplit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.TransSplit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_transSplit = value["TransSplit"].GetBool();
        m_transSplitHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceWeights") && !value["InstanceWeights"].IsNull())
    {
        if (!value["InstanceWeights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.InstanceWeights` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceWeights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyInstanceWeight item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceWeights.push_back(item);
        }
        m_instanceWeightsHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("LoadBalanceMode") && !value["LoadBalanceMode"].IsNull())
    {
        if (!value["LoadBalanceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.LoadBalanceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalanceMode = string(value["LoadBalanceMode"].GetString());
        m_loadBalanceModeHasBeenSet = true;
    }

    if (value.HasMember("OpenConnectionPool") && !value["OpenConnectionPool"].IsNull())
    {
        if (!value["OpenConnectionPool"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.OpenConnectionPool` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openConnectionPool = string(value["OpenConnectionPool"].GetString());
        m_openConnectionPoolHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolType") && !value["ConnectionPoolType"].IsNull())
    {
        if (!value["ConnectionPoolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.ConnectionPoolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolType = string(value["ConnectionPoolType"].GetString());
        m_connectionPoolTypeHasBeenSet = true;
    }

    if (value.HasMember("ConnectionPoolTimeOut") && !value["ConnectionPoolTimeOut"].IsNull())
    {
        if (!value["ConnectionPoolTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointItem.ConnectionPoolTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectionPoolTimeOut = value["ConnectionPoolTimeOut"].GetInt64();
        m_connectionPoolTimeOutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyEndPointItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uniqueVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_autoAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAddRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoAddRo.c_str(), allocator).Move(), allocator);
    }

    if (m_rwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rwType.c_str(), allocator).Move(), allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failOver.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsistencyTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consistencyTimeOut, allocator);
    }

    if (m_consistencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsistencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consistencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_transSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSplit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transSplit, allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceWeightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceWeights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceWeights.begin(); itr != m_instanceWeights.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalanceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalanceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_openConnectionPoolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenConnectionPool";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openConnectionPool.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionPoolType.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionPoolTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionPoolTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionPoolTimeOut, allocator);
    }

}


string ProxyEndPointItem::GetUniqueVpcId() const
{
    return m_uniqueVpcId;
}

void ProxyEndPointItem::SetUniqueVpcId(const string& _uniqueVpcId)
{
    m_uniqueVpcId = _uniqueVpcId;
    m_uniqueVpcIdHasBeenSet = true;
}

bool ProxyEndPointItem::UniqueVpcIdHasBeenSet() const
{
    return m_uniqueVpcIdHasBeenSet;
}

string ProxyEndPointItem::GetUniqueSubnetId() const
{
    return m_uniqueSubnetId;
}

void ProxyEndPointItem::SetUniqueSubnetId(const string& _uniqueSubnetId)
{
    m_uniqueSubnetId = _uniqueSubnetId;
    m_uniqueSubnetIdHasBeenSet = true;
}

bool ProxyEndPointItem::UniqueSubnetIdHasBeenSet() const
{
    return m_uniqueSubnetIdHasBeenSet;
}

vector<string> ProxyEndPointItem::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ProxyEndPointItem::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ProxyEndPointItem::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string ProxyEndPointItem::GetWeightMode() const
{
    return m_weightMode;
}

void ProxyEndPointItem::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool ProxyEndPointItem::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

string ProxyEndPointItem::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void ProxyEndPointItem::SetAutoAddRo(const string& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool ProxyEndPointItem::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

string ProxyEndPointItem::GetRwType() const
{
    return m_rwType;
}

void ProxyEndPointItem::SetRwType(const string& _rwType)
{
    m_rwType = _rwType;
    m_rwTypeHasBeenSet = true;
}

bool ProxyEndPointItem::RwTypeHasBeenSet() const
{
    return m_rwTypeHasBeenSet;
}

string ProxyEndPointItem::GetFailOver() const
{
    return m_failOver;
}

void ProxyEndPointItem::SetFailOver(const string& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool ProxyEndPointItem::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

int64_t ProxyEndPointItem::GetConsistencyTimeOut() const
{
    return m_consistencyTimeOut;
}

void ProxyEndPointItem::SetConsistencyTimeOut(const int64_t& _consistencyTimeOut)
{
    m_consistencyTimeOut = _consistencyTimeOut;
    m_consistencyTimeOutHasBeenSet = true;
}

bool ProxyEndPointItem::ConsistencyTimeOutHasBeenSet() const
{
    return m_consistencyTimeOutHasBeenSet;
}

string ProxyEndPointItem::GetConsistencyType() const
{
    return m_consistencyType;
}

void ProxyEndPointItem::SetConsistencyType(const string& _consistencyType)
{
    m_consistencyType = _consistencyType;
    m_consistencyTypeHasBeenSet = true;
}

bool ProxyEndPointItem::ConsistencyTypeHasBeenSet() const
{
    return m_consistencyTypeHasBeenSet;
}

bool ProxyEndPointItem::GetTransSplit() const
{
    return m_transSplit;
}

void ProxyEndPointItem::SetTransSplit(const bool& _transSplit)
{
    m_transSplit = _transSplit;
    m_transSplitHasBeenSet = true;
}

bool ProxyEndPointItem::TransSplitHasBeenSet() const
{
    return m_transSplitHasBeenSet;
}

string ProxyEndPointItem::GetAccessMode() const
{
    return m_accessMode;
}

void ProxyEndPointItem::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool ProxyEndPointItem::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

vector<ProxyInstanceWeight> ProxyEndPointItem::GetInstanceWeights() const
{
    return m_instanceWeights;
}

void ProxyEndPointItem::SetInstanceWeights(const vector<ProxyInstanceWeight>& _instanceWeights)
{
    m_instanceWeights = _instanceWeights;
    m_instanceWeightsHasBeenSet = true;
}

bool ProxyEndPointItem::InstanceWeightsHasBeenSet() const
{
    return m_instanceWeightsHasBeenSet;
}

string ProxyEndPointItem::GetDescription() const
{
    return m_description;
}

void ProxyEndPointItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ProxyEndPointItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ProxyEndPointItem::GetLoadBalanceMode() const
{
    return m_loadBalanceMode;
}

void ProxyEndPointItem::SetLoadBalanceMode(const string& _loadBalanceMode)
{
    m_loadBalanceMode = _loadBalanceMode;
    m_loadBalanceModeHasBeenSet = true;
}

bool ProxyEndPointItem::LoadBalanceModeHasBeenSet() const
{
    return m_loadBalanceModeHasBeenSet;
}

string ProxyEndPointItem::GetOpenConnectionPool() const
{
    return m_openConnectionPool;
}

void ProxyEndPointItem::SetOpenConnectionPool(const string& _openConnectionPool)
{
    m_openConnectionPool = _openConnectionPool;
    m_openConnectionPoolHasBeenSet = true;
}

bool ProxyEndPointItem::OpenConnectionPoolHasBeenSet() const
{
    return m_openConnectionPoolHasBeenSet;
}

string ProxyEndPointItem::GetConnectionPoolType() const
{
    return m_connectionPoolType;
}

void ProxyEndPointItem::SetConnectionPoolType(const string& _connectionPoolType)
{
    m_connectionPoolType = _connectionPoolType;
    m_connectionPoolTypeHasBeenSet = true;
}

bool ProxyEndPointItem::ConnectionPoolTypeHasBeenSet() const
{
    return m_connectionPoolTypeHasBeenSet;
}

int64_t ProxyEndPointItem::GetConnectionPoolTimeOut() const
{
    return m_connectionPoolTimeOut;
}

void ProxyEndPointItem::SetConnectionPoolTimeOut(const int64_t& _connectionPoolTimeOut)
{
    m_connectionPoolTimeOut = _connectionPoolTimeOut;
    m_connectionPoolTimeOutHasBeenSet = true;
}

bool ProxyEndPointItem::ConnectionPoolTimeOutHasBeenSet() const
{
    return m_connectionPoolTimeOutHasBeenSet;
}

