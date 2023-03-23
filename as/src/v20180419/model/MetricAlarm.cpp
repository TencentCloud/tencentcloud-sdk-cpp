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

#include <tencentcloud/as/v20180419/model/MetricAlarm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

MetricAlarm::MetricAlarm() :
    m_comparisonOperatorHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_continuousTimeHasBeenSet(false),
    m_statisticHasBeenSet(false),
    m_preciseThresholdHasBeenSet(false)
{
}

CoreInternalOutcome MetricAlarm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComparisonOperator") && !value["ComparisonOperator"].IsNull())
    {
        if (!value["ComparisonOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAlarm.ComparisonOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparisonOperator = string(value["ComparisonOperator"].GetString());
        m_comparisonOperatorHasBeenSet = true;
    }

    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAlarm.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAlarm.Threshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetUint64();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAlarm.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("ContinuousTime") && !value["ContinuousTime"].IsNull())
    {
        if (!value["ContinuousTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAlarm.ContinuousTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_continuousTime = value["ContinuousTime"].GetUint64();
        m_continuousTimeHasBeenSet = true;
    }

    if (value.HasMember("Statistic") && !value["Statistic"].IsNull())
    {
        if (!value["Statistic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAlarm.Statistic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statistic = string(value["Statistic"].GetString());
        m_statisticHasBeenSet = true;
    }

    if (value.HasMember("PreciseThreshold") && !value["PreciseThreshold"].IsNull())
    {
        if (!value["PreciseThreshold"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricAlarm.PreciseThreshold` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_preciseThreshold = value["PreciseThreshold"].GetDouble();
        m_preciseThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricAlarm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_comparisonOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComparisonOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comparisonOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_continuousTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinuousTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_continuousTime, allocator);
    }

    if (m_statisticHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statistic.c_str(), allocator).Move(), allocator);
    }

    if (m_preciseThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreciseThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preciseThreshold, allocator);
    }

}


string MetricAlarm::GetComparisonOperator() const
{
    return m_comparisonOperator;
}

void MetricAlarm::SetComparisonOperator(const string& _comparisonOperator)
{
    m_comparisonOperator = _comparisonOperator;
    m_comparisonOperatorHasBeenSet = true;
}

bool MetricAlarm::ComparisonOperatorHasBeenSet() const
{
    return m_comparisonOperatorHasBeenSet;
}

string MetricAlarm::GetMetricName() const
{
    return m_metricName;
}

void MetricAlarm::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricAlarm::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

uint64_t MetricAlarm::GetThreshold() const
{
    return m_threshold;
}

void MetricAlarm::SetThreshold(const uint64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool MetricAlarm::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

uint64_t MetricAlarm::GetPeriod() const
{
    return m_period;
}

void MetricAlarm::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool MetricAlarm::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t MetricAlarm::GetContinuousTime() const
{
    return m_continuousTime;
}

void MetricAlarm::SetContinuousTime(const uint64_t& _continuousTime)
{
    m_continuousTime = _continuousTime;
    m_continuousTimeHasBeenSet = true;
}

bool MetricAlarm::ContinuousTimeHasBeenSet() const
{
    return m_continuousTimeHasBeenSet;
}

string MetricAlarm::GetStatistic() const
{
    return m_statistic;
}

void MetricAlarm::SetStatistic(const string& _statistic)
{
    m_statistic = _statistic;
    m_statisticHasBeenSet = true;
}

bool MetricAlarm::StatisticHasBeenSet() const
{
    return m_statisticHasBeenSet;
}

double MetricAlarm::GetPreciseThreshold() const
{
    return m_preciseThreshold;
}

void MetricAlarm::SetPreciseThreshold(const double& _preciseThreshold)
{
    m_preciseThreshold = _preciseThreshold;
    m_preciseThresholdHasBeenSet = true;
}

bool MetricAlarm::PreciseThresholdHasBeenSet() const
{
    return m_preciseThresholdHasBeenSet;
}

