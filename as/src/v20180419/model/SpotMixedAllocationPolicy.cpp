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

#include <tencentcloud/as/v20180419/model/SpotMixedAllocationPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

SpotMixedAllocationPolicy::SpotMixedAllocationPolicy() :
    m_baseCapacityHasBeenSet(false),
    m_onDemandPercentageAboveBaseCapacityHasBeenSet(false),
    m_spotAllocationStrategyHasBeenSet(false),
    m_compensateWithBaseInstanceHasBeenSet(false)
{
}

CoreInternalOutcome SpotMixedAllocationPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaseCapacity") && !value["BaseCapacity"].IsNull())
    {
        if (!value["BaseCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpotMixedAllocationPolicy.BaseCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baseCapacity = value["BaseCapacity"].GetUint64();
        m_baseCapacityHasBeenSet = true;
    }

    if (value.HasMember("OnDemandPercentageAboveBaseCapacity") && !value["OnDemandPercentageAboveBaseCapacity"].IsNull())
    {
        if (!value["OnDemandPercentageAboveBaseCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpotMixedAllocationPolicy.OnDemandPercentageAboveBaseCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_onDemandPercentageAboveBaseCapacity = value["OnDemandPercentageAboveBaseCapacity"].GetUint64();
        m_onDemandPercentageAboveBaseCapacityHasBeenSet = true;
    }

    if (value.HasMember("SpotAllocationStrategy") && !value["SpotAllocationStrategy"].IsNull())
    {
        if (!value["SpotAllocationStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpotMixedAllocationPolicy.SpotAllocationStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spotAllocationStrategy = string(value["SpotAllocationStrategy"].GetString());
        m_spotAllocationStrategyHasBeenSet = true;
    }

    if (value.HasMember("CompensateWithBaseInstance") && !value["CompensateWithBaseInstance"].IsNull())
    {
        if (!value["CompensateWithBaseInstance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SpotMixedAllocationPolicy.CompensateWithBaseInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_compensateWithBaseInstance = value["CompensateWithBaseInstance"].GetBool();
        m_compensateWithBaseInstanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpotMixedAllocationPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baseCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseCapacity, allocator);
    }

    if (m_onDemandPercentageAboveBaseCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnDemandPercentageAboveBaseCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onDemandPercentageAboveBaseCapacity, allocator);
    }

    if (m_spotAllocationStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotAllocationStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spotAllocationStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_compensateWithBaseInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompensateWithBaseInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compensateWithBaseInstance, allocator);
    }

}


uint64_t SpotMixedAllocationPolicy::GetBaseCapacity() const
{
    return m_baseCapacity;
}

void SpotMixedAllocationPolicy::SetBaseCapacity(const uint64_t& _baseCapacity)
{
    m_baseCapacity = _baseCapacity;
    m_baseCapacityHasBeenSet = true;
}

bool SpotMixedAllocationPolicy::BaseCapacityHasBeenSet() const
{
    return m_baseCapacityHasBeenSet;
}

uint64_t SpotMixedAllocationPolicy::GetOnDemandPercentageAboveBaseCapacity() const
{
    return m_onDemandPercentageAboveBaseCapacity;
}

void SpotMixedAllocationPolicy::SetOnDemandPercentageAboveBaseCapacity(const uint64_t& _onDemandPercentageAboveBaseCapacity)
{
    m_onDemandPercentageAboveBaseCapacity = _onDemandPercentageAboveBaseCapacity;
    m_onDemandPercentageAboveBaseCapacityHasBeenSet = true;
}

bool SpotMixedAllocationPolicy::OnDemandPercentageAboveBaseCapacityHasBeenSet() const
{
    return m_onDemandPercentageAboveBaseCapacityHasBeenSet;
}

string SpotMixedAllocationPolicy::GetSpotAllocationStrategy() const
{
    return m_spotAllocationStrategy;
}

void SpotMixedAllocationPolicy::SetSpotAllocationStrategy(const string& _spotAllocationStrategy)
{
    m_spotAllocationStrategy = _spotAllocationStrategy;
    m_spotAllocationStrategyHasBeenSet = true;
}

bool SpotMixedAllocationPolicy::SpotAllocationStrategyHasBeenSet() const
{
    return m_spotAllocationStrategyHasBeenSet;
}

bool SpotMixedAllocationPolicy::GetCompensateWithBaseInstance() const
{
    return m_compensateWithBaseInstance;
}

void SpotMixedAllocationPolicy::SetCompensateWithBaseInstance(const bool& _compensateWithBaseInstance)
{
    m_compensateWithBaseInstance = _compensateWithBaseInstance;
    m_compensateWithBaseInstanceHasBeenSet = true;
}

bool SpotMixedAllocationPolicy::CompensateWithBaseInstanceHasBeenSet() const
{
    return m_compensateWithBaseInstanceHasBeenSet;
}

