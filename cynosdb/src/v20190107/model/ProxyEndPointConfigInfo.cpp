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

#include <tencentcloud/cynosdb/v20190107/model/ProxyEndPointConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyEndPointConfigInfo::ProxyEndPointConfigInfo() :
    m_uniqueVpcIdHasBeenSet(false),
    m_uniqueSubnetIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_rwTypeHasBeenSet(false),
    m_instanceNameWeightsHasBeenSet(false)
{
}

CoreInternalOutcome ProxyEndPointConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UniqueVpcId") && !value["UniqueVpcId"].IsNull())
    {
        if (!value["UniqueVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointConfigInfo.UniqueVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueVpcId = string(value["UniqueVpcId"].GetString());
        m_uniqueVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqueSubnetId") && !value["UniqueSubnetId"].IsNull())
    {
        if (!value["UniqueSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointConfigInfo.UniqueSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueSubnetId = string(value["UniqueSubnetId"].GetString());
        m_uniqueSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointConfigInfo.SecurityGroupIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointConfigInfo.WeightMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightMode = string(value["WeightMode"].GetString());
        m_weightModeHasBeenSet = true;
    }

    if (value.HasMember("AutoAddRo") && !value["AutoAddRo"].IsNull())
    {
        if (!value["AutoAddRo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointConfigInfo.AutoAddRo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoAddRo = string(value["AutoAddRo"].GetString());
        m_autoAddRoHasBeenSet = true;
    }

    if (value.HasMember("RwType") && !value["RwType"].IsNull())
    {
        if (!value["RwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointConfigInfo.RwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rwType = string(value["RwType"].GetString());
        m_rwTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceNameWeights") && !value["InstanceNameWeights"].IsNull())
    {
        if (!value["InstanceNameWeights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyEndPointConfigInfo.InstanceNameWeights` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceNameWeights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNameWeight item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceNameWeights.push_back(item);
        }
        m_instanceNameWeightsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyEndPointConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceNameWeightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNameWeights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceNameWeights.begin(); itr != m_instanceNameWeights.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ProxyEndPointConfigInfo::GetUniqueVpcId() const
{
    return m_uniqueVpcId;
}

void ProxyEndPointConfigInfo::SetUniqueVpcId(const string& _uniqueVpcId)
{
    m_uniqueVpcId = _uniqueVpcId;
    m_uniqueVpcIdHasBeenSet = true;
}

bool ProxyEndPointConfigInfo::UniqueVpcIdHasBeenSet() const
{
    return m_uniqueVpcIdHasBeenSet;
}

string ProxyEndPointConfigInfo::GetUniqueSubnetId() const
{
    return m_uniqueSubnetId;
}

void ProxyEndPointConfigInfo::SetUniqueSubnetId(const string& _uniqueSubnetId)
{
    m_uniqueSubnetId = _uniqueSubnetId;
    m_uniqueSubnetIdHasBeenSet = true;
}

bool ProxyEndPointConfigInfo::UniqueSubnetIdHasBeenSet() const
{
    return m_uniqueSubnetIdHasBeenSet;
}

vector<string> ProxyEndPointConfigInfo::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ProxyEndPointConfigInfo::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ProxyEndPointConfigInfo::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string ProxyEndPointConfigInfo::GetWeightMode() const
{
    return m_weightMode;
}

void ProxyEndPointConfigInfo::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool ProxyEndPointConfigInfo::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

string ProxyEndPointConfigInfo::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void ProxyEndPointConfigInfo::SetAutoAddRo(const string& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool ProxyEndPointConfigInfo::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

string ProxyEndPointConfigInfo::GetRwType() const
{
    return m_rwType;
}

void ProxyEndPointConfigInfo::SetRwType(const string& _rwType)
{
    m_rwType = _rwType;
    m_rwTypeHasBeenSet = true;
}

bool ProxyEndPointConfigInfo::RwTypeHasBeenSet() const
{
    return m_rwTypeHasBeenSet;
}

vector<InstanceNameWeight> ProxyEndPointConfigInfo::GetInstanceNameWeights() const
{
    return m_instanceNameWeights;
}

void ProxyEndPointConfigInfo::SetInstanceNameWeights(const vector<InstanceNameWeight>& _instanceNameWeights)
{
    m_instanceNameWeights = _instanceNameWeights;
    m_instanceNameWeightsHasBeenSet = true;
}

bool ProxyEndPointConfigInfo::InstanceNameWeightsHasBeenSet() const
{
    return m_instanceNameWeightsHasBeenSet;
}

