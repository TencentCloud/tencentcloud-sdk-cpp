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

#include <tencentcloud/emr/v20190103/model/OverviewMetricData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

OverviewMetricData::OverviewMetricData() :
    m_metricHasBeenSet(false),
    m_firstHasBeenSet(false),
    m_lastHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_dataPointsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome OverviewMetricData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewMetricData.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("First") && !value["First"].IsNull())
    {
        if (!value["First"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewMetricData.First` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_first = value["First"].GetInt64();
        m_firstHasBeenSet = true;
    }

    if (value.HasMember("Last") && !value["Last"].IsNull())
    {
        if (!value["Last"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewMetricData.Last` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_last = value["Last"].GetInt64();
        m_lastHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewMetricData.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("DataPoints") && !value["DataPoints"].IsNull())
    {
        if (!value["DataPoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OverviewMetricData.DataPoints` is not array type"));

        const rapidjson::Value &tmpValue = value["DataPoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataPoints.push_back((*itr).GetString());
        }
        m_dataPointsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewMetricData.Tags` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tags.Deserialize(value["Tags"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewMetricData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_firstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "First";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_first, allocator);
    }

    if (m_lastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Last";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_last, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_dataPointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataPoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataPoints.begin(); itr != m_dataPoints.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tags.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OverviewMetricData::GetMetric() const
{
    return m_metric;
}

void OverviewMetricData::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool OverviewMetricData::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

int64_t OverviewMetricData::GetFirst() const
{
    return m_first;
}

void OverviewMetricData::SetFirst(const int64_t& _first)
{
    m_first = _first;
    m_firstHasBeenSet = true;
}

bool OverviewMetricData::FirstHasBeenSet() const
{
    return m_firstHasBeenSet;
}

int64_t OverviewMetricData::GetLast() const
{
    return m_last;
}

void OverviewMetricData::SetLast(const int64_t& _last)
{
    m_last = _last;
    m_lastHasBeenSet = true;
}

bool OverviewMetricData::LastHasBeenSet() const
{
    return m_lastHasBeenSet;
}

int64_t OverviewMetricData::GetInterval() const
{
    return m_interval;
}

void OverviewMetricData::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool OverviewMetricData::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

vector<string> OverviewMetricData::GetDataPoints() const
{
    return m_dataPoints;
}

void OverviewMetricData::SetDataPoints(const vector<string>& _dataPoints)
{
    m_dataPoints = _dataPoints;
    m_dataPointsHasBeenSet = true;
}

bool OverviewMetricData::DataPointsHasBeenSet() const
{
    return m_dataPointsHasBeenSet;
}

MetricTags OverviewMetricData::GetTags() const
{
    return m_tags;
}

void OverviewMetricData::SetTags(const MetricTags& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool OverviewMetricData::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

