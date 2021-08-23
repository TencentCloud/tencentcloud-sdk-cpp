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

#include <tencentcloud/tsf/v20180326/model/GroupUnitApiDailyUseStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GroupUnitApiDailyUseStatistics::GroupUnitApiDailyUseStatistics() :
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_sumReqAmountHasBeenSet(false),
    m_avgFailureRateHasBeenSet(false),
    m_avgTimeCostHasBeenSet(false),
    m_metricDataPointMapHasBeenSet(false),
    m_topStatusCodeHasBeenSet(false),
    m_topTimeCostHasBeenSet(false),
    m_quantileHasBeenSet(false)
{
}

CoreInternalOutcome GroupUnitApiDailyUseStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("SumReqAmount") && !value["SumReqAmount"].IsNull())
    {
        if (!value["SumReqAmount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.SumReqAmount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sumReqAmount = string(value["SumReqAmount"].GetString());
        m_sumReqAmountHasBeenSet = true;
    }

    if (value.HasMember("AvgFailureRate") && !value["AvgFailureRate"].IsNull())
    {
        if (!value["AvgFailureRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.AvgFailureRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgFailureRate = string(value["AvgFailureRate"].GetString());
        m_avgFailureRateHasBeenSet = true;
    }

    if (value.HasMember("AvgTimeCost") && !value["AvgTimeCost"].IsNull())
    {
        if (!value["AvgTimeCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.AvgTimeCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgTimeCost = string(value["AvgTimeCost"].GetString());
        m_avgTimeCostHasBeenSet = true;
    }

    if (value.HasMember("MetricDataPointMap") && !value["MetricDataPointMap"].IsNull())
    {
        if (!value["MetricDataPointMap"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.MetricDataPointMap` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metricDataPointMap.Deserialize(value["MetricDataPointMap"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metricDataPointMapHasBeenSet = true;
    }

    if (value.HasMember("TopStatusCode") && !value["TopStatusCode"].IsNull())
    {
        if (!value["TopStatusCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.TopStatusCode` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.TopTimeCost` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `GroupUnitApiDailyUseStatistics.Quantile` is not object type").SetRequestId(requestId));
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

void GroupUnitApiDailyUseStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sumReqAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumReqAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sumReqAmount.c_str(), allocator).Move(), allocator);
    }

    if (m_avgFailureRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgFailureRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgFailureRate.c_str(), allocator).Move(), allocator);
    }

    if (m_avgTimeCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgTimeCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgTimeCost.c_str(), allocator).Move(), allocator);
    }

    if (m_metricDataPointMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDataPointMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metricDataPointMap.ToJsonObject(value[key.c_str()], allocator);
    }

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


string GroupUnitApiDailyUseStatistics::GetNamespaceId() const
{
    return m_namespaceId;
}

void GroupUnitApiDailyUseStatistics::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string GroupUnitApiDailyUseStatistics::GetNamespaceName() const
{
    return m_namespaceName;
}

void GroupUnitApiDailyUseStatistics::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string GroupUnitApiDailyUseStatistics::GetSumReqAmount() const
{
    return m_sumReqAmount;
}

void GroupUnitApiDailyUseStatistics::SetSumReqAmount(const string& _sumReqAmount)
{
    m_sumReqAmount = _sumReqAmount;
    m_sumReqAmountHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::SumReqAmountHasBeenSet() const
{
    return m_sumReqAmountHasBeenSet;
}

string GroupUnitApiDailyUseStatistics::GetAvgFailureRate() const
{
    return m_avgFailureRate;
}

void GroupUnitApiDailyUseStatistics::SetAvgFailureRate(const string& _avgFailureRate)
{
    m_avgFailureRate = _avgFailureRate;
    m_avgFailureRateHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::AvgFailureRateHasBeenSet() const
{
    return m_avgFailureRateHasBeenSet;
}

string GroupUnitApiDailyUseStatistics::GetAvgTimeCost() const
{
    return m_avgTimeCost;
}

void GroupUnitApiDailyUseStatistics::SetAvgTimeCost(const string& _avgTimeCost)
{
    m_avgTimeCost = _avgTimeCost;
    m_avgTimeCostHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::AvgTimeCostHasBeenSet() const
{
    return m_avgTimeCostHasBeenSet;
}

MetricDataPointMap GroupUnitApiDailyUseStatistics::GetMetricDataPointMap() const
{
    return m_metricDataPointMap;
}

void GroupUnitApiDailyUseStatistics::SetMetricDataPointMap(const MetricDataPointMap& _metricDataPointMap)
{
    m_metricDataPointMap = _metricDataPointMap;
    m_metricDataPointMapHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::MetricDataPointMapHasBeenSet() const
{
    return m_metricDataPointMapHasBeenSet;
}

vector<ApiUseStatisticsEntity> GroupUnitApiDailyUseStatistics::GetTopStatusCode() const
{
    return m_topStatusCode;
}

void GroupUnitApiDailyUseStatistics::SetTopStatusCode(const vector<ApiUseStatisticsEntity>& _topStatusCode)
{
    m_topStatusCode = _topStatusCode;
    m_topStatusCodeHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::TopStatusCodeHasBeenSet() const
{
    return m_topStatusCodeHasBeenSet;
}

vector<ApiUseStatisticsEntity> GroupUnitApiDailyUseStatistics::GetTopTimeCost() const
{
    return m_topTimeCost;
}

void GroupUnitApiDailyUseStatistics::SetTopTimeCost(const vector<ApiUseStatisticsEntity>& _topTimeCost)
{
    m_topTimeCost = _topTimeCost;
    m_topTimeCostHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::TopTimeCostHasBeenSet() const
{
    return m_topTimeCostHasBeenSet;
}

QuantileEntity GroupUnitApiDailyUseStatistics::GetQuantile() const
{
    return m_quantile;
}

void GroupUnitApiDailyUseStatistics::SetQuantile(const QuantileEntity& _quantile)
{
    m_quantile = _quantile;
    m_quantileHasBeenSet = true;
}

bool GroupUnitApiDailyUseStatistics::QuantileHasBeenSet() const
{
    return m_quantileHasBeenSet;
}

