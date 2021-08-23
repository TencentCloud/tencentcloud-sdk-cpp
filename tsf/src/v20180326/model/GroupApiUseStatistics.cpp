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

#include <tencentcloud/tsf/v20180326/model/GroupApiUseStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GroupApiUseStatistics::GroupApiUseStatistics() :
    m_topStatusCodeHasBeenSet(false),
    m_topTimeCostHasBeenSet(false),
    m_quantileHasBeenSet(false)
{
}

CoreInternalOutcome GroupApiUseStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopStatusCode") && !value["TopStatusCode"].IsNull())
    {
        if (!value["TopStatusCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupApiUseStatistics.TopStatusCode` is not array type"));

        const rapidjson::Value &tmpValue = value["TopStatusCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiUseStatisticsEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topStatusCode.push_back(item);
        }
        m_topStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("TopTimeCost") && !value["TopTimeCost"].IsNull())
    {
        if (!value["TopTimeCost"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupApiUseStatistics.TopTimeCost` is not array type"));

        const rapidjson::Value &tmpValue = value["TopTimeCost"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiUseStatisticsEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topTimeCost.push_back(item);
        }
        m_topTimeCostHasBeenSet = true;
    }

    if (value.HasMember("Quantile") && !value["Quantile"].IsNull())
    {
        if (!value["Quantile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GroupApiUseStatistics.Quantile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quantile.Deserialize(value["Quantile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quantileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupApiUseStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topStatusCode.begin(); itr != m_topStatusCode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topTimeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopTimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topTimeCost.begin(); itr != m_topTimeCost.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_quantileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quantile.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<ApiUseStatisticsEntity> GroupApiUseStatistics::GetTopStatusCode() const
{
    return m_topStatusCode;
}

void GroupApiUseStatistics::SetTopStatusCode(const vector<ApiUseStatisticsEntity>& _topStatusCode)
{
    m_topStatusCode = _topStatusCode;
    m_topStatusCodeHasBeenSet = true;
}

bool GroupApiUseStatistics::TopStatusCodeHasBeenSet() const
{
    return m_topStatusCodeHasBeenSet;
}

vector<ApiUseStatisticsEntity> GroupApiUseStatistics::GetTopTimeCost() const
{
    return m_topTimeCost;
}

void GroupApiUseStatistics::SetTopTimeCost(const vector<ApiUseStatisticsEntity>& _topTimeCost)
{
    m_topTimeCost = _topTimeCost;
    m_topTimeCostHasBeenSet = true;
}

bool GroupApiUseStatistics::TopTimeCostHasBeenSet() const
{
    return m_topTimeCostHasBeenSet;
}

QuantileEntity GroupApiUseStatistics::GetQuantile() const
{
    return m_quantile;
}

void GroupApiUseStatistics::SetQuantile(const QuantileEntity& _quantile)
{
    m_quantile = _quantile;
    m_quantileHasBeenSet = true;
}

bool GroupApiUseStatistics::QuantileHasBeenSet() const
{
    return m_quantileHasBeenSet;
}

