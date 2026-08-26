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

#include <tencentcloud/monitor/v20180724/model/ShieldMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ShieldMetric::ShieldMetric() :
    m_metricHasBeenSet(false),
    m_metricShowNameHasBeenSet(false)
{
}

CoreInternalOutcome ShieldMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldMetric.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("MetricShowName") && !value["MetricShowName"].IsNull())
    {
        if (!value["MetricShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldMetric.MetricShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricShowName = string(value["MetricShowName"].GetString());
        m_metricShowNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShieldMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_metricShowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricShowName.c_str(), allocator).Move(), allocator);
    }

}


string ShieldMetric::GetMetric() const
{
    return m_metric;
}

void ShieldMetric::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool ShieldMetric::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string ShieldMetric::GetMetricShowName() const
{
    return m_metricShowName;
}

void ShieldMetric::SetMetricShowName(const string& _metricShowName)
{
    m_metricShowName = _metricShowName;
    m_metricShowNameHasBeenSet = true;
}

bool ShieldMetric::MetricShowNameHasBeenSet() const
{
    return m_metricShowNameHasBeenSet;
}

