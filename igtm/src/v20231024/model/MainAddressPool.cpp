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

#include <tencentcloud/igtm/v20231024/model/MainAddressPool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

MainAddressPool::MainAddressPool() :
    m_addressPoolsHasBeenSet(false),
    m_mainAddressPoolIdHasBeenSet(false),
    m_minSurviveNumHasBeenSet(false),
    m_trafficStrategyHasBeenSet(false)
{
}

CoreInternalOutcome MainAddressPool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AddressPools") && !value["AddressPools"].IsNull())
    {
        if (!value["AddressPools"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MainAddressPool.AddressPools` is not array type"));

        const rapidjson::Value &tmpValue = value["AddressPools"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MainPoolWeight item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addressPools.push_back(item);
        }
        m_addressPoolsHasBeenSet = true;
    }

    if (value.HasMember("MainAddressPoolId") && !value["MainAddressPoolId"].IsNull())
    {
        if (!value["MainAddressPoolId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MainAddressPool.MainAddressPoolId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mainAddressPoolId = value["MainAddressPoolId"].GetUint64();
        m_mainAddressPoolIdHasBeenSet = true;
    }

    if (value.HasMember("MinSurviveNum") && !value["MinSurviveNum"].IsNull())
    {
        if (!value["MinSurviveNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MainAddressPool.MinSurviveNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minSurviveNum = value["MinSurviveNum"].GetUint64();
        m_minSurviveNumHasBeenSet = true;
    }

    if (value.HasMember("TrafficStrategy") && !value["TrafficStrategy"].IsNull())
    {
        if (!value["TrafficStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MainAddressPool.TrafficStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficStrategy = string(value["TrafficStrategy"].GetString());
        m_trafficStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MainAddressPool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addressPoolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressPools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addressPools.begin(); itr != m_addressPools.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mainAddressPoolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainAddressPoolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mainAddressPoolId, allocator);
    }

    if (m_minSurviveNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinSurviveNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minSurviveNum, allocator);
    }

    if (m_trafficStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficStrategy.c_str(), allocator).Move(), allocator);
    }

}


vector<MainPoolWeight> MainAddressPool::GetAddressPools() const
{
    return m_addressPools;
}

void MainAddressPool::SetAddressPools(const vector<MainPoolWeight>& _addressPools)
{
    m_addressPools = _addressPools;
    m_addressPoolsHasBeenSet = true;
}

bool MainAddressPool::AddressPoolsHasBeenSet() const
{
    return m_addressPoolsHasBeenSet;
}

uint64_t MainAddressPool::GetMainAddressPoolId() const
{
    return m_mainAddressPoolId;
}

void MainAddressPool::SetMainAddressPoolId(const uint64_t& _mainAddressPoolId)
{
    m_mainAddressPoolId = _mainAddressPoolId;
    m_mainAddressPoolIdHasBeenSet = true;
}

bool MainAddressPool::MainAddressPoolIdHasBeenSet() const
{
    return m_mainAddressPoolIdHasBeenSet;
}

uint64_t MainAddressPool::GetMinSurviveNum() const
{
    return m_minSurviveNum;
}

void MainAddressPool::SetMinSurviveNum(const uint64_t& _minSurviveNum)
{
    m_minSurviveNum = _minSurviveNum;
    m_minSurviveNumHasBeenSet = true;
}

bool MainAddressPool::MinSurviveNumHasBeenSet() const
{
    return m_minSurviveNumHasBeenSet;
}

string MainAddressPool::GetTrafficStrategy() const
{
    return m_trafficStrategy;
}

void MainAddressPool::SetTrafficStrategy(const string& _trafficStrategy)
{
    m_trafficStrategy = _trafficStrategy;
    m_trafficStrategyHasBeenSet = true;
}

bool MainAddressPool::TrafficStrategyHasBeenSet() const
{
    return m_trafficStrategyHasBeenSet;
}

