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

#include <tencentcloud/dbbrain/v20210527/model/MetricThreshold.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

MetricThreshold::MetricThreshold() :
    m_metricHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome MetricThreshold::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricThreshold.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricThreshold.Threshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetInt64();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricThreshold.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricThreshold::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


string MetricThreshold::GetMetric() const
{
    return m_metric;
}

void MetricThreshold::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool MetricThreshold::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

int64_t MetricThreshold::GetThreshold() const
{
    return m_threshold;
}

void MetricThreshold::SetThreshold(const int64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool MetricThreshold::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

int64_t MetricThreshold::GetDuration() const
{
    return m_duration;
}

void MetricThreshold::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MetricThreshold::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

