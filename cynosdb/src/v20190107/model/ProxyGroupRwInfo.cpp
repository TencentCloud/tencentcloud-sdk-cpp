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

#include <tencentcloud/cynosdb/v20190107/model/ProxyGroupRwInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ProxyGroupRwInfo::ProxyGroupRwInfo() :
    m_consistencyTypeHasBeenSet(false),
    m_consistencyTimeOutHasBeenSet(false),
    m_weightModeHasBeenSet(false),
    m_failOverHasBeenSet(false),
    m_autoAddRoHasBeenSet(false),
    m_instanceWeightsHasBeenSet(false),
    m_openRwHasBeenSet(false),
    m_rwTypeHasBeenSet(false),
    m_transSplitHasBeenSet(false),
    m_accessModeHasBeenSet(false)
{
}

CoreInternalOutcome ProxyGroupRwInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsistencyType") && !value["ConsistencyType"].IsNull())
    {
        if (!value["ConsistencyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.ConsistencyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consistencyType = string(value["ConsistencyType"].GetString());
        m_consistencyTypeHasBeenSet = true;
    }

    if (value.HasMember("ConsistencyTimeOut") && !value["ConsistencyTimeOut"].IsNull())
    {
        if (!value["ConsistencyTimeOut"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.ConsistencyTimeOut` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consistencyTimeOut = value["ConsistencyTimeOut"].GetInt64();
        m_consistencyTimeOutHasBeenSet = true;
    }

    if (value.HasMember("WeightMode") && !value["WeightMode"].IsNull())
    {
        if (!value["WeightMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.WeightMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weightMode = string(value["WeightMode"].GetString());
        m_weightModeHasBeenSet = true;
    }

    if (value.HasMember("FailOver") && !value["FailOver"].IsNull())
    {
        if (!value["FailOver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.FailOver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failOver = string(value["FailOver"].GetString());
        m_failOverHasBeenSet = true;
    }

    if (value.HasMember("AutoAddRo") && !value["AutoAddRo"].IsNull())
    {
        if (!value["AutoAddRo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.AutoAddRo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoAddRo = string(value["AutoAddRo"].GetString());
        m_autoAddRoHasBeenSet = true;
    }

    if (value.HasMember("InstanceWeights") && !value["InstanceWeights"].IsNull())
    {
        if (!value["InstanceWeights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.InstanceWeights` is not array type"));

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

    if (value.HasMember("OpenRw") && !value["OpenRw"].IsNull())
    {
        if (!value["OpenRw"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.OpenRw` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openRw = string(value["OpenRw"].GetString());
        m_openRwHasBeenSet = true;
    }

    if (value.HasMember("RwType") && !value["RwType"].IsNull())
    {
        if (!value["RwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.RwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rwType = string(value["RwType"].GetString());
        m_rwTypeHasBeenSet = true;
    }

    if (value.HasMember("TransSplit") && !value["TransSplit"].IsNull())
    {
        if (!value["TransSplit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.TransSplit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_transSplit = value["TransSplit"].GetBool();
        m_transSplitHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyGroupRwInfo.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyGroupRwInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consistencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsistencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consistencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_consistencyTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsistencyTimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consistencyTimeOut, allocator);
    }

    if (m_weightModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weightMode.c_str(), allocator).Move(), allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failOver.c_str(), allocator).Move(), allocator);
    }

    if (m_autoAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAddRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoAddRo.c_str(), allocator).Move(), allocator);
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

    if (m_openRwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenRw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openRw.c_str(), allocator).Move(), allocator);
    }

    if (m_rwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rwType.c_str(), allocator).Move(), allocator);
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

}


string ProxyGroupRwInfo::GetConsistencyType() const
{
    return m_consistencyType;
}

void ProxyGroupRwInfo::SetConsistencyType(const string& _consistencyType)
{
    m_consistencyType = _consistencyType;
    m_consistencyTypeHasBeenSet = true;
}

bool ProxyGroupRwInfo::ConsistencyTypeHasBeenSet() const
{
    return m_consistencyTypeHasBeenSet;
}

int64_t ProxyGroupRwInfo::GetConsistencyTimeOut() const
{
    return m_consistencyTimeOut;
}

void ProxyGroupRwInfo::SetConsistencyTimeOut(const int64_t& _consistencyTimeOut)
{
    m_consistencyTimeOut = _consistencyTimeOut;
    m_consistencyTimeOutHasBeenSet = true;
}

bool ProxyGroupRwInfo::ConsistencyTimeOutHasBeenSet() const
{
    return m_consistencyTimeOutHasBeenSet;
}

string ProxyGroupRwInfo::GetWeightMode() const
{
    return m_weightMode;
}

void ProxyGroupRwInfo::SetWeightMode(const string& _weightMode)
{
    m_weightMode = _weightMode;
    m_weightModeHasBeenSet = true;
}

bool ProxyGroupRwInfo::WeightModeHasBeenSet() const
{
    return m_weightModeHasBeenSet;
}

string ProxyGroupRwInfo::GetFailOver() const
{
    return m_failOver;
}

void ProxyGroupRwInfo::SetFailOver(const string& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool ProxyGroupRwInfo::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}

string ProxyGroupRwInfo::GetAutoAddRo() const
{
    return m_autoAddRo;
}

void ProxyGroupRwInfo::SetAutoAddRo(const string& _autoAddRo)
{
    m_autoAddRo = _autoAddRo;
    m_autoAddRoHasBeenSet = true;
}

bool ProxyGroupRwInfo::AutoAddRoHasBeenSet() const
{
    return m_autoAddRoHasBeenSet;
}

vector<ProxyInstanceWeight> ProxyGroupRwInfo::GetInstanceWeights() const
{
    return m_instanceWeights;
}

void ProxyGroupRwInfo::SetInstanceWeights(const vector<ProxyInstanceWeight>& _instanceWeights)
{
    m_instanceWeights = _instanceWeights;
    m_instanceWeightsHasBeenSet = true;
}

bool ProxyGroupRwInfo::InstanceWeightsHasBeenSet() const
{
    return m_instanceWeightsHasBeenSet;
}

string ProxyGroupRwInfo::GetOpenRw() const
{
    return m_openRw;
}

void ProxyGroupRwInfo::SetOpenRw(const string& _openRw)
{
    m_openRw = _openRw;
    m_openRwHasBeenSet = true;
}

bool ProxyGroupRwInfo::OpenRwHasBeenSet() const
{
    return m_openRwHasBeenSet;
}

string ProxyGroupRwInfo::GetRwType() const
{
    return m_rwType;
}

void ProxyGroupRwInfo::SetRwType(const string& _rwType)
{
    m_rwType = _rwType;
    m_rwTypeHasBeenSet = true;
}

bool ProxyGroupRwInfo::RwTypeHasBeenSet() const
{
    return m_rwTypeHasBeenSet;
}

bool ProxyGroupRwInfo::GetTransSplit() const
{
    return m_transSplit;
}

void ProxyGroupRwInfo::SetTransSplit(const bool& _transSplit)
{
    m_transSplit = _transSplit;
    m_transSplitHasBeenSet = true;
}

bool ProxyGroupRwInfo::TransSplitHasBeenSet() const
{
    return m_transSplitHasBeenSet;
}

string ProxyGroupRwInfo::GetAccessMode() const
{
    return m_accessMode;
}

void ProxyGroupRwInfo::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool ProxyGroupRwInfo::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

