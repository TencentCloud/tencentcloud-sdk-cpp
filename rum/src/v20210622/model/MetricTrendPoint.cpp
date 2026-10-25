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

#include <tencentcloud/rum/v20210622/model/MetricTrendPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

MetricTrendPoint::MetricTrendPoint() :
    m_tsHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

CoreInternalOutcome MetricTrendPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ts") && !value["Ts"].IsNull())
    {
        if (!value["Ts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricTrendPoint.Ts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ts = value["Ts"].GetInt64();
        m_tsHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricTrendPoint.Metrics` is not array type"));

        const rapidjson::Value &tmpValue = value["Metrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FloatNameValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metrics.push_back(item);
        }
        m_metricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricTrendPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ts, allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t MetricTrendPoint::GetTs() const
{
    return m_ts;
}

void MetricTrendPoint::SetTs(const int64_t& _ts)
{
    m_ts = _ts;
    m_tsHasBeenSet = true;
}

bool MetricTrendPoint::TsHasBeenSet() const
{
    return m_tsHasBeenSet;
}

vector<FloatNameValue> MetricTrendPoint::GetMetrics() const
{
    return m_metrics;
}

void MetricTrendPoint::SetMetrics(const vector<FloatNameValue>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool MetricTrendPoint::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

