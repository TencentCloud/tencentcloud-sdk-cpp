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

#include <tencentcloud/tsf/v20180326/model/MetricDataPointMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

MetricDataPointMap::MetricDataPointMap() :
    m_sumReqAmountHasBeenSet(false),
    m_avgFailureRateHasBeenSet(false),
    m_avgTimeCostHasBeenSet(false)
{
}

CoreInternalOutcome MetricDataPointMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SumReqAmount") && !value["SumReqAmount"].IsNull())
    {
        if (!value["SumReqAmount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricDataPointMap.SumReqAmount` is not array type"));

        const rapidjson::Value &tmpValue = value["SumReqAmount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sumReqAmount.push_back(item);
        }
        m_sumReqAmountHasBeenSet = true;
    }

    if (value.HasMember("AvgFailureRate") && !value["AvgFailureRate"].IsNull())
    {
        if (!value["AvgFailureRate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricDataPointMap.AvgFailureRate` is not array type"));

        const rapidjson::Value &tmpValue = value["AvgFailureRate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_avgFailureRate.push_back(item);
        }
        m_avgFailureRateHasBeenSet = true;
    }

    if (value.HasMember("AvgTimeCost") && !value["AvgTimeCost"].IsNull())
    {
        if (!value["AvgTimeCost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricDataPointMap.AvgTimeCost` is not array type"));

        const rapidjson::Value &tmpValue = value["AvgTimeCost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricDataPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_avgTimeCost.push_back(item);
        }
        m_avgTimeCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricDataPointMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sumReqAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumReqAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sumReqAmount.begin(); itr != m_sumReqAmount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_avgFailureRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgFailureRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_avgFailureRate.begin(); itr != m_avgFailureRate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_avgTimeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgTimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_avgTimeCost.begin(); itr != m_avgTimeCost.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MetricDataPoint> MetricDataPointMap::GetSumReqAmount() const
{
    return m_sumReqAmount;
}

void MetricDataPointMap::SetSumReqAmount(const vector<MetricDataPoint>& _sumReqAmount)
{
    m_sumReqAmount = _sumReqAmount;
    m_sumReqAmountHasBeenSet = true;
}

bool MetricDataPointMap::SumReqAmountHasBeenSet() const
{
    return m_sumReqAmountHasBeenSet;
}

vector<MetricDataPoint> MetricDataPointMap::GetAvgFailureRate() const
{
    return m_avgFailureRate;
}

void MetricDataPointMap::SetAvgFailureRate(const vector<MetricDataPoint>& _avgFailureRate)
{
    m_avgFailureRate = _avgFailureRate;
    m_avgFailureRateHasBeenSet = true;
}

bool MetricDataPointMap::AvgFailureRateHasBeenSet() const
{
    return m_avgFailureRateHasBeenSet;
}

vector<MetricDataPoint> MetricDataPointMap::GetAvgTimeCost() const
{
    return m_avgTimeCost;
}

void MetricDataPointMap::SetAvgTimeCost(const vector<MetricDataPoint>& _avgTimeCost)
{
    m_avgTimeCost = _avgTimeCost;
    m_avgTimeCostHasBeenSet = true;
}

bool MetricDataPointMap::AvgTimeCostHasBeenSet() const
{
    return m_avgTimeCostHasBeenSet;
}

