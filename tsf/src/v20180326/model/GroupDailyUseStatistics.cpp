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

#include <tencentcloud/tsf/v20180326/model/GroupDailyUseStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GroupDailyUseStatistics::GroupDailyUseStatistics() :
    m_topReqAmountHasBeenSet(false),
    m_topFailureRateHasBeenSet(false),
    m_topAvgTimeCostHasBeenSet(false)
{
}

CoreInternalOutcome GroupDailyUseStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopReqAmount") && !value["TopReqAmount"].IsNull())
    {
        if (!value["TopReqAmount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupDailyUseStatistics.TopReqAmount` is not array type"));

        const rapidjson::Value &tmpValue = value["TopReqAmount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupUseStatisticsEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topReqAmount.push_back(item);
        }
        m_topReqAmountHasBeenSet = true;
    }

    if (value.HasMember("TopFailureRate") && !value["TopFailureRate"].IsNull())
    {
        if (!value["TopFailureRate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupDailyUseStatistics.TopFailureRate` is not array type"));

        const rapidjson::Value &tmpValue = value["TopFailureRate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupUseStatisticsEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topFailureRate.push_back(item);
        }
        m_topFailureRateHasBeenSet = true;
    }

    if (value.HasMember("TopAvgTimeCost") && !value["TopAvgTimeCost"].IsNull())
    {
        if (!value["TopAvgTimeCost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupDailyUseStatistics.TopAvgTimeCost` is not array type"));

        const rapidjson::Value &tmpValue = value["TopAvgTimeCost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupUseStatisticsEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topAvgTimeCost.push_back(item);
        }
        m_topAvgTimeCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupDailyUseStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topReqAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopReqAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topReqAmount.begin(); itr != m_topReqAmount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topFailureRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopFailureRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topFailureRate.begin(); itr != m_topFailureRate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topAvgTimeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopAvgTimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topAvgTimeCost.begin(); itr != m_topAvgTimeCost.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<GroupUseStatisticsEntity> GroupDailyUseStatistics::GetTopReqAmount() const
{
    return m_topReqAmount;
}

void GroupDailyUseStatistics::SetTopReqAmount(const vector<GroupUseStatisticsEntity>& _topReqAmount)
{
    m_topReqAmount = _topReqAmount;
    m_topReqAmountHasBeenSet = true;
}

bool GroupDailyUseStatistics::TopReqAmountHasBeenSet() const
{
    return m_topReqAmountHasBeenSet;
}

vector<GroupUseStatisticsEntity> GroupDailyUseStatistics::GetTopFailureRate() const
{
    return m_topFailureRate;
}

void GroupDailyUseStatistics::SetTopFailureRate(const vector<GroupUseStatisticsEntity>& _topFailureRate)
{
    m_topFailureRate = _topFailureRate;
    m_topFailureRateHasBeenSet = true;
}

bool GroupDailyUseStatistics::TopFailureRateHasBeenSet() const
{
    return m_topFailureRateHasBeenSet;
}

vector<GroupUseStatisticsEntity> GroupDailyUseStatistics::GetTopAvgTimeCost() const
{
    return m_topAvgTimeCost;
}

void GroupDailyUseStatistics::SetTopAvgTimeCost(const vector<GroupUseStatisticsEntity>& _topAvgTimeCost)
{
    m_topAvgTimeCost = _topAvgTimeCost;
    m_topAvgTimeCostHasBeenSet = true;
}

bool GroupDailyUseStatistics::TopAvgTimeCostHasBeenSet() const
{
    return m_topAvgTimeCostHasBeenSet;
}

