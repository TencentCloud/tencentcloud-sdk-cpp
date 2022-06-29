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

#include <tencentcloud/tsf/v20180326/model/InvocationIndicator.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

InvocationIndicator::InvocationIndicator() :
    m_invocationQuantityHasBeenSet(false),
    m_invocationSuccessRateHasBeenSet(false),
    m_invocationAvgDurationHasBeenSet(false),
    m_invocationSuccessDistributionHasBeenSet(false),
    m_invocationFailedDistributionHasBeenSet(false),
    m_invocationStatusDistributionHasBeenSet(false),
    m_invocationDurationDistributionHasBeenSet(false),
    m_invocationQuantityDistributionHasBeenSet(false)
{
}

CoreInternalOutcome InvocationIndicator::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvocationQuantity") && !value["InvocationQuantity"].IsNull())
    {
        if (!value["InvocationQuantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationIndicator.InvocationQuantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invocationQuantity = value["InvocationQuantity"].GetInt64();
        m_invocationQuantityHasBeenSet = true;
    }

    if (value.HasMember("InvocationSuccessRate") && !value["InvocationSuccessRate"].IsNull())
    {
        if (!value["InvocationSuccessRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationIndicator.InvocationSuccessRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_invocationSuccessRate = value["InvocationSuccessRate"].GetDouble();
        m_invocationSuccessRateHasBeenSet = true;
    }

    if (value.HasMember("InvocationAvgDuration") && !value["InvocationAvgDuration"].IsNull())
    {
        if (!value["InvocationAvgDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InvocationIndicator.InvocationAvgDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_invocationAvgDuration = value["InvocationAvgDuration"].GetDouble();
        m_invocationAvgDurationHasBeenSet = true;
    }

    if (value.HasMember("InvocationSuccessDistribution") && !value["InvocationSuccessDistribution"].IsNull())
    {
        if (!value["InvocationSuccessDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvocationIndicator.InvocationSuccessDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["InvocationSuccessDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorCoord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invocationSuccessDistribution.push_back(item);
        }
        m_invocationSuccessDistributionHasBeenSet = true;
    }

    if (value.HasMember("InvocationFailedDistribution") && !value["InvocationFailedDistribution"].IsNull())
    {
        if (!value["InvocationFailedDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvocationIndicator.InvocationFailedDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["InvocationFailedDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorCoord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invocationFailedDistribution.push_back(item);
        }
        m_invocationFailedDistributionHasBeenSet = true;
    }

    if (value.HasMember("InvocationStatusDistribution") && !value["InvocationStatusDistribution"].IsNull())
    {
        if (!value["InvocationStatusDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvocationIndicator.InvocationStatusDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["InvocationStatusDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorCoord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invocationStatusDistribution.push_back(item);
        }
        m_invocationStatusDistributionHasBeenSet = true;
    }

    if (value.HasMember("InvocationDurationDistribution") && !value["InvocationDurationDistribution"].IsNull())
    {
        if (!value["InvocationDurationDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvocationIndicator.InvocationDurationDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["InvocationDurationDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorCoord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invocationDurationDistribution.push_back(item);
        }
        m_invocationDurationDistributionHasBeenSet = true;
    }

    if (value.HasMember("InvocationQuantityDistribution") && !value["InvocationQuantityDistribution"].IsNull())
    {
        if (!value["InvocationQuantityDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvocationIndicator.InvocationQuantityDistribution` is not array type"));

        const rapidjson::Value &tmpValue = value["InvocationQuantityDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorCoord item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invocationQuantityDistribution.push_back(item);
        }
        m_invocationQuantityDistributionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvocationIndicator::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invocationQuantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationQuantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invocationQuantity, allocator);
    }

    if (m_invocationSuccessRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationSuccessRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invocationSuccessRate, allocator);
    }

    if (m_invocationAvgDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationAvgDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invocationAvgDuration, allocator);
    }

    if (m_invocationSuccessDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationSuccessDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocationSuccessDistribution.begin(); itr != m_invocationSuccessDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invocationFailedDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationFailedDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocationFailedDistribution.begin(); itr != m_invocationFailedDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invocationStatusDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationStatusDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocationStatusDistribution.begin(); itr != m_invocationStatusDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invocationDurationDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationDurationDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocationDurationDistribution.begin(); itr != m_invocationDurationDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invocationQuantityDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationQuantityDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocationQuantityDistribution.begin(); itr != m_invocationQuantityDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InvocationIndicator::GetInvocationQuantity() const
{
    return m_invocationQuantity;
}

void InvocationIndicator::SetInvocationQuantity(const int64_t& _invocationQuantity)
{
    m_invocationQuantity = _invocationQuantity;
    m_invocationQuantityHasBeenSet = true;
}

bool InvocationIndicator::InvocationQuantityHasBeenSet() const
{
    return m_invocationQuantityHasBeenSet;
}

double InvocationIndicator::GetInvocationSuccessRate() const
{
    return m_invocationSuccessRate;
}

void InvocationIndicator::SetInvocationSuccessRate(const double& _invocationSuccessRate)
{
    m_invocationSuccessRate = _invocationSuccessRate;
    m_invocationSuccessRateHasBeenSet = true;
}

bool InvocationIndicator::InvocationSuccessRateHasBeenSet() const
{
    return m_invocationSuccessRateHasBeenSet;
}

double InvocationIndicator::GetInvocationAvgDuration() const
{
    return m_invocationAvgDuration;
}

void InvocationIndicator::SetInvocationAvgDuration(const double& _invocationAvgDuration)
{
    m_invocationAvgDuration = _invocationAvgDuration;
    m_invocationAvgDurationHasBeenSet = true;
}

bool InvocationIndicator::InvocationAvgDurationHasBeenSet() const
{
    return m_invocationAvgDurationHasBeenSet;
}

vector<IndicatorCoord> InvocationIndicator::GetInvocationSuccessDistribution() const
{
    return m_invocationSuccessDistribution;
}

void InvocationIndicator::SetInvocationSuccessDistribution(const vector<IndicatorCoord>& _invocationSuccessDistribution)
{
    m_invocationSuccessDistribution = _invocationSuccessDistribution;
    m_invocationSuccessDistributionHasBeenSet = true;
}

bool InvocationIndicator::InvocationSuccessDistributionHasBeenSet() const
{
    return m_invocationSuccessDistributionHasBeenSet;
}

vector<IndicatorCoord> InvocationIndicator::GetInvocationFailedDistribution() const
{
    return m_invocationFailedDistribution;
}

void InvocationIndicator::SetInvocationFailedDistribution(const vector<IndicatorCoord>& _invocationFailedDistribution)
{
    m_invocationFailedDistribution = _invocationFailedDistribution;
    m_invocationFailedDistributionHasBeenSet = true;
}

bool InvocationIndicator::InvocationFailedDistributionHasBeenSet() const
{
    return m_invocationFailedDistributionHasBeenSet;
}

vector<IndicatorCoord> InvocationIndicator::GetInvocationStatusDistribution() const
{
    return m_invocationStatusDistribution;
}

void InvocationIndicator::SetInvocationStatusDistribution(const vector<IndicatorCoord>& _invocationStatusDistribution)
{
    m_invocationStatusDistribution = _invocationStatusDistribution;
    m_invocationStatusDistributionHasBeenSet = true;
}

bool InvocationIndicator::InvocationStatusDistributionHasBeenSet() const
{
    return m_invocationStatusDistributionHasBeenSet;
}

vector<IndicatorCoord> InvocationIndicator::GetInvocationDurationDistribution() const
{
    return m_invocationDurationDistribution;
}

void InvocationIndicator::SetInvocationDurationDistribution(const vector<IndicatorCoord>& _invocationDurationDistribution)
{
    m_invocationDurationDistribution = _invocationDurationDistribution;
    m_invocationDurationDistributionHasBeenSet = true;
}

bool InvocationIndicator::InvocationDurationDistributionHasBeenSet() const
{
    return m_invocationDurationDistributionHasBeenSet;
}

vector<IndicatorCoord> InvocationIndicator::GetInvocationQuantityDistribution() const
{
    return m_invocationQuantityDistribution;
}

void InvocationIndicator::SetInvocationQuantityDistribution(const vector<IndicatorCoord>& _invocationQuantityDistribution)
{
    m_invocationQuantityDistribution = _invocationQuantityDistribution;
    m_invocationQuantityDistributionHasBeenSet = true;
}

bool InvocationIndicator::InvocationQuantityDistributionHasBeenSet() const
{
    return m_invocationQuantityDistributionHasBeenSet;
}

