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

#include <tencentcloud/dbbrain/v20210527/model/HealthScoreTimeSeriesData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

HealthScoreTimeSeriesData::HealthScoreTimeSeriesData() :
    m_avgHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CoreInternalOutcome HealthScoreTimeSeriesData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Avg") && !value["Avg"].IsNull())
    {
        if (!value["Avg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HealthScoreTimeSeriesData.Avg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avg = value["Avg"].GetDouble();
        m_avgHasBeenSet = true;
    }

    if (value.HasMember("HealthStatus") && !value["HealthStatus"].IsNull())
    {
        if (!value["HealthStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HealthScoreTimeSeriesData.HealthStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_healthStatus = value["HealthStatus"].GetUint64();
        m_healthStatusHasBeenSet = true;
    }

    if (value.HasMember("Metric") && !value["Metric"].IsNull())
    {
        if (!value["Metric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthScoreTimeSeriesData.Metric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metric = string(value["Metric"].GetString());
        m_metricHasBeenSet = true;
    }

    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthScoreTimeSeriesData.Series` is not array type"));

        const rapidjson::Value &tmpValue = value["Series"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_series.push_back((*itr).GetUint64());
        }
        m_seriesHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HealthScoreTimeSeriesData.Timestamp` is not array type"));

        const rapidjson::Value &tmpValue = value["Timestamp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestamp.push_back((*itr).GetUint64());
        }
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HealthScoreTimeSeriesData.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HealthScoreTimeSeriesData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_avgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avg, allocator);
    }

    if (m_healthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthStatus, allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_series.begin(); itr != m_series.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timestamp.begin(); itr != m_timestamp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

}


double HealthScoreTimeSeriesData::GetAvg() const
{
    return m_avg;
}

void HealthScoreTimeSeriesData::SetAvg(const double& _avg)
{
    m_avg = _avg;
    m_avgHasBeenSet = true;
}

bool HealthScoreTimeSeriesData::AvgHasBeenSet() const
{
    return m_avgHasBeenSet;
}

uint64_t HealthScoreTimeSeriesData::GetHealthStatus() const
{
    return m_healthStatus;
}

void HealthScoreTimeSeriesData::SetHealthStatus(const uint64_t& _healthStatus)
{
    m_healthStatus = _healthStatus;
    m_healthStatusHasBeenSet = true;
}

bool HealthScoreTimeSeriesData::HealthStatusHasBeenSet() const
{
    return m_healthStatusHasBeenSet;
}

string HealthScoreTimeSeriesData::GetMetric() const
{
    return m_metric;
}

void HealthScoreTimeSeriesData::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool HealthScoreTimeSeriesData::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

vector<uint64_t> HealthScoreTimeSeriesData::GetSeries() const
{
    return m_series;
}

void HealthScoreTimeSeriesData::SetSeries(const vector<uint64_t>& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool HealthScoreTimeSeriesData::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

vector<uint64_t> HealthScoreTimeSeriesData::GetTimestamp() const
{
    return m_timestamp;
}

void HealthScoreTimeSeriesData::SetTimestamp(const vector<uint64_t>& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool HealthScoreTimeSeriesData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string HealthScoreTimeSeriesData::GetUnit() const
{
    return m_unit;
}

void HealthScoreTimeSeriesData::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool HealthScoreTimeSeriesData::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

