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

#include <tencentcloud/emr/v20190103/model/HBaseMetricData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

HBaseMetricData::HBaseMetricData() :
    m_metricNameHasBeenSet(false),
    m_metricDescHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

CoreInternalOutcome HBaseMetricData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HBaseMetricData.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("MetricDesc") && !value["MetricDesc"].IsNull())
    {
        if (!value["MetricDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HBaseMetricData.MetricDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricDesc = string(value["MetricDesc"].GetString());
        m_metricDescHasBeenSet = true;
    }

    if (value.HasMember("Timestamps") && !value["Timestamps"].IsNull())
    {
        if (!value["Timestamps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HBaseMetricData.Timestamps` is not array type"));

        const rapidjson::Value &tmpValue = value["Timestamps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestamps.push_back((*itr).GetInt64());
        }
        m_timestampsHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HBaseMetricData.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetDouble());
        }
        m_valuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HBaseMetricData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timestamps.begin(); itr != m_timestamps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


string HBaseMetricData::GetMetricName() const
{
    return m_metricName;
}

void HBaseMetricData::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool HBaseMetricData::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string HBaseMetricData::GetMetricDesc() const
{
    return m_metricDesc;
}

void HBaseMetricData::SetMetricDesc(const string& _metricDesc)
{
    m_metricDesc = _metricDesc;
    m_metricDescHasBeenSet = true;
}

bool HBaseMetricData::MetricDescHasBeenSet() const
{
    return m_metricDescHasBeenSet;
}

vector<int64_t> HBaseMetricData::GetTimestamps() const
{
    return m_timestamps;
}

void HBaseMetricData::SetTimestamps(const vector<int64_t>& _timestamps)
{
    m_timestamps = _timestamps;
    m_timestampsHasBeenSet = true;
}

bool HBaseMetricData::TimestampsHasBeenSet() const
{
    return m_timestampsHasBeenSet;
}

vector<double> HBaseMetricData::GetValues() const
{
    return m_values;
}

void HBaseMetricData::SetValues(const vector<double>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool HBaseMetricData::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

