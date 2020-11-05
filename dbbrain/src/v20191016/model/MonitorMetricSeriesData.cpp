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

#include <tencentcloud/dbbrain/v20191016/model/MonitorMetricSeriesData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace rapidjson;
using namespace std;

MonitorMetricSeriesData::MonitorMetricSeriesData() :
    m_seriesHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome MonitorMetricSeriesData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsArray())
            return CoreInternalOutcome(Error("response `MonitorMetricSeriesData.Series` is not array type"));

        const Value &tmpValue = value["Series"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonitorMetric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_series.push_back(item);
        }
        m_seriesHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsArray())
            return CoreInternalOutcome(Error("response `MonitorMetricSeriesData.Timestamp` is not array type"));

        const Value &tmpValue = value["Timestamp"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestamp.push_back((*itr).GetInt64());
        }
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorMetricSeriesData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_seriesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_series.begin(); itr != m_series.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timestampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_timestamp.begin(); itr != m_timestamp.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

}


vector<MonitorMetric> MonitorMetricSeriesData::GetSeries() const
{
    return m_series;
}

void MonitorMetricSeriesData::SetSeries(const vector<MonitorMetric>& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool MonitorMetricSeriesData::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

vector<int64_t> MonitorMetricSeriesData::GetTimestamp() const
{
    return m_timestamp;
}

void MonitorMetricSeriesData::SetTimestamp(const vector<int64_t>& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool MonitorMetricSeriesData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

