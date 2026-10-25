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

#include <tencentcloud/rum/v20210622/model/MetricTrendBatchItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

MetricTrendBatchItem::MetricTrendBatchItem() :
    m_keyHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_compareSeriesHasBeenSet(false),
    m_maybeUncollectedHasBeenSet(false)
{
}

CoreInternalOutcome MetricTrendBatchItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricTrendBatchItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Series") && !value["Series"].IsNull())
    {
        if (!value["Series"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricTrendBatchItem.Series` is not array type"));

        const rapidjson::Value &tmpValue = value["Series"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricTrendPoint item;
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

    if (value.HasMember("CompareSeries") && !value["CompareSeries"].IsNull())
    {
        if (!value["CompareSeries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricTrendBatchItem.CompareSeries` is not array type"));

        const rapidjson::Value &tmpValue = value["CompareSeries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricTrendPoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_compareSeries.push_back(item);
        }
        m_compareSeriesHasBeenSet = true;
    }

    if (value.HasMember("MaybeUncollected") && !value["MaybeUncollected"].IsNull())
    {
        if (!value["MaybeUncollected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MetricTrendBatchItem.MaybeUncollected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_maybeUncollected = value["MaybeUncollected"].GetBool();
        m_maybeUncollectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricTrendBatchItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

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

    if (m_compareSeriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareSeries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_compareSeries.begin(); itr != m_compareSeries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maybeUncollectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaybeUncollected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maybeUncollected, allocator);
    }

}


string MetricTrendBatchItem::GetKey() const
{
    return m_key;
}

void MetricTrendBatchItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool MetricTrendBatchItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

vector<MetricTrendPoint> MetricTrendBatchItem::GetSeries() const
{
    return m_series;
}

void MetricTrendBatchItem::SetSeries(const vector<MetricTrendPoint>& _series)
{
    m_series = _series;
    m_seriesHasBeenSet = true;
}

bool MetricTrendBatchItem::SeriesHasBeenSet() const
{
    return m_seriesHasBeenSet;
}

vector<MetricTrendPoint> MetricTrendBatchItem::GetCompareSeries() const
{
    return m_compareSeries;
}

void MetricTrendBatchItem::SetCompareSeries(const vector<MetricTrendPoint>& _compareSeries)
{
    m_compareSeries = _compareSeries;
    m_compareSeriesHasBeenSet = true;
}

bool MetricTrendBatchItem::CompareSeriesHasBeenSet() const
{
    return m_compareSeriesHasBeenSet;
}

bool MetricTrendBatchItem::GetMaybeUncollected() const
{
    return m_maybeUncollected;
}

void MetricTrendBatchItem::SetMaybeUncollected(const bool& _maybeUncollected)
{
    m_maybeUncollected = _maybeUncollected;
    m_maybeUncollectedHasBeenSet = true;
}

bool MetricTrendBatchItem::MaybeUncollectedHasBeenSet() const
{
    return m_maybeUncollectedHasBeenSet;
}

