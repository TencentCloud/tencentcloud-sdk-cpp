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

#include <tencentcloud/apm/v20210622/model/ChartData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ChartData::ChartData() :
    m_seriesHasBeenSet(false),
    m_yAxisHasBeenSet(false)
{
}

CoreInternalOutcome ChartData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChartData.Series` is not array type"));

        const rapidjson::Value &tmpValue = value["Series"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Series item;
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

    if (value.HasMember("YAxis") && !value["YAxis"].IsNull())
    {
        if (!value["YAxis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChartData.YAxis` is not array type"));

        const rapidjson::Value &tmpValue = value["YAxis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            YAxis item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_yAxis.push_back(item);
        }
        m_yAxisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChartData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_seriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Series";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_series.begin(); itr != m_series.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_yAxisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YAxis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_yAxis.begin(); itr != m_yAxis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Series> ChartData::GetSeries() const
{
    return m_series;
}

void ChartData::SetSeries(const vector<Series>& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool ChartData::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

vector<YAxis> ChartData::GetYAxis() const
{
    return m_yAxis;
}

void ChartData::SetYAxis(const vector<YAxis>& _yAxis)
{
    m_yAxis = _yAxis;
    m_yAxisHasBeenSet = true;
}

bool ChartData::YAxisHasBeenSet() const
{
    return m_yAxisHasBeenSet;
}

