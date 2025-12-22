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

#include <tencentcloud/cls/v20201016/model/MetricConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

MetricConfig::MetricConfig() :
    m_metricNameHasBeenSet(false),
    m_periodsHasBeenSet(false),
    m_metricLabelsHasBeenSet(false)
{
}

CoreInternalOutcome MetricConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricConfig.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Periods") && !value["Periods"].IsNull())
    {
        if (!value["Periods"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricConfig.Periods` is not array type"));

        const rapidjson::Value &tmpValue = value["Periods"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_periods.push_back((*itr).GetUint64());
        }
        m_periodsHasBeenSet = true;
    }

    if (value.HasMember("MetricLabels") && !value["MetricLabels"].IsNull())
    {
        if (!value["MetricLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricConfig.MetricLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricLabels.push_back(item);
        }
        m_metricLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Periods";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_periods.begin(); itr != m_periods.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_metricLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricLabels.begin(); itr != m_metricLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MetricConfig::GetMetricName() const
{
    return m_metricName;
}

void MetricConfig::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool MetricConfig::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

vector<uint64_t> MetricConfig::GetPeriods() const
{
    return m_periods;
}

void MetricConfig::SetPeriods(const vector<uint64_t>& _periods)
{
    m_periods = _periods;
    m_periodsHasBeenSet = true;
}

bool MetricConfig::PeriodsHasBeenSet() const
{
    return m_periodsHasBeenSet;
}

vector<MetricLabel> MetricConfig::GetMetricLabels() const
{
    return m_metricLabels;
}

void MetricConfig::SetMetricLabels(const vector<MetricLabel>& _metricLabels)
{
    m_metricLabels = _metricLabels;
    m_metricLabelsHasBeenSet = true;
}

bool MetricConfig::MetricLabelsHasBeenSet() const
{
    return m_metricLabelsHasBeenSet;
}

